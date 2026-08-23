# Write your MySQL query statement below
select a.student_id , a.student_name , e.subject_name ,count(b.subject_name) as attended_exams from Students as a
cross join Subjects as e
left join Examinations as b
on a.student_id = b.student_id and e.subject_name=b.subject_name
group by a.student_id, e.subject_name , a.student_name 
order by a.student_id , e.subject_name ;