# Write your MySQL query statement below
select a.employee_id from employees as a
left join Salaries as b
on a.employee_id =b.employee_id
where b.salary is null
union 
select a.employee_id from salaries as a
left join employees as b
on a.employee_id =b.employee_id
where b.name is null 
order by  employee_id;