# Write your MySQL query statement below
select ip , count(ip) as invalid_count from logs

where ip not regexp'^((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])\\.){3}(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])$'


group by ip 
order by invalid_count desc , ip desc;