# Write your MySQL query statement below
select a.store_id , a.store_name  , a.location ,

(select product_name from inventory where store_id=a.store_id order by price desc limit 1) as most_exp_product,
(select product_name from inventory where store_id=a.store_id order by price asc limit 1) as cheapest_product,

round((select quantity from inventory where store_id=a.store_id order by price asc limit 1)/
(select quantity from inventory where store_id=a.store_id order by price desc limit 1) ,2) as imbalance_ratio
from stores as a
left join inventory as b 
on a.store_id =b.store_id
group by b.store_id
having (select quantity from inventory where store_id=a.store_id order by price asc limit 1)>
(select quantity from inventory where store_id=a.store_id order by price desc limit 1) and count(*)>=3
order by imbalance_ratio desc , store_name asc;
