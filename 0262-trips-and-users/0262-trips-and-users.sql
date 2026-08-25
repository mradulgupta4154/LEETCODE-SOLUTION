# Write your MySQL query statement below
select t.request_at as 'Day' ,
round(sum(case when t.status = 'cancelled_by_driver' or t.status='cancelled_by_client' then 1 else 0 end)/count(t.status),2) as'Cancellation Rate' 
from trips as t
join users as c 
on t.client_id = c.users_id and c.banned='No'
join users as u 
on t.driver_id = u.users_id and u.banned='No'
where request_at>='2013-10-01' and request_at<='2013-10-03'
group by t.request_at;