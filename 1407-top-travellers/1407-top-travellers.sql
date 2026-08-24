# Write your MySQL query statement below
select a.name , sum(case when b.distance is null then '0' else b.distance end) as travelled_distance from Users as a
left join Rides as b
on a.id =b.user_id
group by b.user_id
order  by travelled_distance  desc , a.name asc;