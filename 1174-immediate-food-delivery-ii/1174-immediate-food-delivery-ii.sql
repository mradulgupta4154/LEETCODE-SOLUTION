# Write your MySQL query statement below
select round(avg(case when order_date=customer_pref_delivery_date then 1 else 0 end)*100 , 2) as immediate_percentage from delivery d 
where order_date = (select min(d2.order_date) from delivery d2 where d2.customer_id = d.customer_id);