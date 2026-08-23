# Write your MySQL query statement below
select product_name , sum(b.unit) as unit from Products as a
inner join Orders as b
on a.product_id=b.product_id
where b.order_date between '2020-02-01' and '2020-02-29'
group by a.product_name
having sum(b.unit)>=100;