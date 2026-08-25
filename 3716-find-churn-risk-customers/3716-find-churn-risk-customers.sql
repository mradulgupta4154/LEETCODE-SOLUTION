SELECT 
    e.user_id,
    latest.plan_name AS current_plan,
    latest.monthly_amount AS current_monthly_amount,
    MAX(e.monthly_amount) AS max_historical_amount,
    DATEDIFF(MAX(e.event_date), MIN(e.event_date)) AS days_as_subscriber
FROM subscription_events e
JOIN (
    SELECT user_id, event_type, plan_name, monthly_amount
    FROM subscription_events s1
    WHERE event_id = (
        SELECT event_id FROM subscription_events s2
        WHERE s2.user_id = s1.user_id
        ORDER BY event_date DESC, event_id DESC
        LIMIT 1
    )
) AS latest ON latest.user_id = e.user_id
GROUP BY e.user_id, latest.event_type, latest.plan_name, latest.monthly_amount
HAVING 
    latest.event_type != 'cancel'
    AND SUM(e.event_type = 'downgrade') >= 1
    AND latest.monthly_amount < 0.5 * MAX(e.monthly_amount)
    AND DATEDIFF(MAX(e.event_date), MIN(e.event_date)) >= 60
ORDER BY days_as_subscriber DESC, e.user_id ASC;