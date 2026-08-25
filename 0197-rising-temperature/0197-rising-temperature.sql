# Write your MySQL query statement below
select w.id from weather w, weather q
where datediff(w.recorddate , q.recorddate)=1 
and w.temperature>q.temperature;