# Write your MySQL query statement below
select b.name as Department , a.name as Employee , a.Salary from employee as a 
left join department as b
on a.departmentId = b.id
where a.salary =(select max(salary) from employee where departmentId = a.departmentId) 
;