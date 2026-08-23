# Write your MySQL query statement below
select a.user_id as buyer_id , a.join_date , count(b.item_id) as orders_in_2019 from Users as a
left join Orders as b
on a.user_id = b.buyer_id and order_date>='2019-01-01' and order_date<='2019-12-31' 
group by a.user_id ;