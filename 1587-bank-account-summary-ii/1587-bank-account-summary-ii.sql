# Write your MySQL query statement below
select name , sum(amount) as balance  from Users as a
left join Transactions as b
on a.account = b.account 
group by b.account
having balance>10000;