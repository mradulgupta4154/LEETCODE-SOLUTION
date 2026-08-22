# Write your MySQL query statement below
select DISTINCT email as "Email" from Person
GROUP BY email
having count(email)>1;