CREATE VIEW TotalContributions AS
SELECT m.member_id, m.first_name, m.last_name, SUM(c.amount) AS total_contributed
FROM Members m
JOIN Contributions c ON m.member_id = c.member_id
GROUP BY m.member_id, m.first_name, m.last_name;


CREATE VIEW PayoutSummary AS
SELECT  m.member_id, m.first_name, m.last_name, SUM(p.amount) AS total_payout, COUNT(p.payout_id) AS number_of_payouts
FROM Members m
JOIN Payouts p ON m.member_id = p.member_id
GROUP BY m.member_id, m.first_name, m.last_name;


CREATE VIEW RecentEvents AS
SELECT e.event_id, m.first_name, m.last_name, e.date, e.type, e.description
FROM Events e
JOIN Members m ON e.member_id = m.member_id
ORDER BY e.date DESC
LIMIT 3;


CREATE VIEW PayoutByEventType AS
SELECT  e.type AS event_type, COUNT(p.payout_id) AS total_payouts, SUM(p.amount) AS total_amount_paid
FROM Payouts p
JOIN Events e ON p.event_id = e.event_id
GROUP BY e.type;
