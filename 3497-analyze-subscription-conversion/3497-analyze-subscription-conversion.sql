# Write your MySQL query statement below
select user_id , 
round(avg(case when activity_type ='free_trial' then activity_duration else null end),2) as trial_avg_duration , 
round(avg(case when activity_type ='paid' then activity_duration else null end ),2) as paid_avg_duration from UserActivity
wHERE user_id IN (
    SELECT user_id
    FROM useractivity
    GROUP BY user_id
    HAVING COUNT(DISTINCT CASE WHEN activity_type='free_trial' THEN 1 END)>0
        AND COUNT(DISTINCT CASE WHEN activity_type='paid' THEN 1 END)>0
)
group by user_id
order by user_id;