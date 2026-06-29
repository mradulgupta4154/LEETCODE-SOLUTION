# Write your MySQL query statement below
select a.driver_id , a.driver_name , 
round(avg(case when month(trip_date) between 1 and 6 then distance_km/fuel_consumed end),2) as first_half_avg , 
round(avg(case when month(trip_date) between 7 and 12  then distance_km/fuel_consumed end),2) as second_half_avg ,
round(-avg(case when month(trip_date) between 1 and 6 then distance_km/fuel_consumed end) +
avg(case when month(trip_date) between 7 and 12  then distance_km/fuel_consumed end),2) as efficiency_improvement 
from drivers a 
left join trips b 
on a.driver_id = b.driver_id
group by driver_id
having first_half_avg is not null and second_half_avg is not null and efficiency_improvement > 0

order by efficiency_improvement  desc , driver_name asc;