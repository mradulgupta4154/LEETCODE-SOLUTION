# Write your MySQL query statement below
select query_name ,
round(avg(rating/position),2)as quality,
round(count(case when rating<3 then 1 else null end)/count(position)*100 , 2)  as poor_query_percentage from Queries 
group by query_name;
