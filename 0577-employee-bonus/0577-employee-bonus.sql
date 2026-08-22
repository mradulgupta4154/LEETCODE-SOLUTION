# Write your MySQL query statement below
select name ,b1.bonus from Employee as e1
left join Bonus as b1
on e1.empID=b1.empID
where b1.bonus is null or b1.bonus<1000 ;