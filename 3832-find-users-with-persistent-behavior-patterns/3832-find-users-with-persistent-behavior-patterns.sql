# Write your MySQL query statement below
select user_id , action ,
count(action) as streak_length,
min(action_date) as start_date,
max(action_date) as end_date from activity
group by action,user_id
having count(*)>=5
order by streak_length desc , user_id asc;