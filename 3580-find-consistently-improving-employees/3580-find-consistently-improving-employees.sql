with ranked_reviews as (
select
	e.employee_id, 
	e.name,
	p.rating,
	lead(rating, 1) over (partition by e.employee_id order by p.review_date desc) as prev_rating,
	lead(rating, 2) over (partition by e.employee_id order by p.review_date desc) as oldest_rating,
	row_number() over (partition by e.employee_id order by p.review_date desc) as rn,
	count(*) over(partition by  e.employee_id) as reviews_count
	from employees e join performance_reviews p on p.employee_id = e.employee_id 
)

select
	employee_id,
	name,
	(rating - oldest_rating) as improvement_score
from ranked_reviews
where 
	rn = 1 and
	rating > prev_rating and
	oldest_rating < prev_rating  and 
	reviews_count >= 3

order by improvement_score desc, name;