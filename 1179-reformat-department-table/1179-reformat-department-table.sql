# Write your MySQL query statement below
select  
   id ,
   max(case when d.month = "jan" then revenue else null end) as 'Jan_Revenue' ,
   MAX(case when d.month = "feb" then revenue else null end) as 'Feb_Revenue' ,
   MAX(case when d.month = "mar" then revenue else null end) as 'Mar_Revenue' ,
   MAX(case when d.month = "apr" then revenue else null end) as 'Apr_Revenue' ,
   MAX(case when d.month = "may" then revenue else null end) as 'May_Revenue' ,
   MAX(case when d.month = "jun" then revenue else null end) as 'Jun_Revenue' ,
   MAX(case when d.month = "jul" then revenue else null end) as 'Jul_Revenue' ,
   MAX(case when d.month = "aug" then revenue else null end) as 'Aug_Revenue' ,
   MAX(case when d.month = "sep" then revenue else null end) as 'Sep_Revenue' ,
   MAX(case when d.month = "oct" then revenue else null end) as 'Oct_Revenue' ,
   MAX(case when d.month = "nov" then revenue else null end) as 'Nov_Revenue' ,
   MAX(case when d.month = "dec" then revenue else null end) as 'Dec_Revenue' 

from Department d
group by id

;
   