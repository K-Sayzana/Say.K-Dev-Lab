-- 1. Insert sample data into Members table
INSERT INTO Members (first_name, last_name, contact, join_date, status)
VALUES 
    ('John', 'Doe', '1234567890', '2025-01-01', TRUE),
    ('Jane', 'Smith', '0987654321', '2025-02-15', TRUE),
    ('Alice', 'Johnson', '1122334455', '2025-03-10', TRUE);

-- 2. Insert a sample contribution for a member
INSERT INTO Contributions (member_id, amount, date, payment_method)
VALUES 
    (1, 100.50, '2025-04-01', 'Cash'),
    (2, 250.00, '2025-04-05', 'Bank Transfer'),
    (1, 75.25, '2025-05-01', 'Mobile Payment');

-- 3. Retrieve total contributions per member with names
SELECT 
    m.member_id,
    m.first_name,
    m.last_name,
    count(*) AS total_contributions
FROM Members m
LEFT JOIN Contributions c ON m.member_id = c.member_id
GROUP BY m.member_id, m.first_name, m.last_name
ORDER BY total_contributions DESC;

-- 4. List all events with member details
SELECT 
    e.event_id,
    e.date,
    e.type,
    e.description,
    m.first_name,
    m.last_name
FROM Events e
JOIN Members m ON e.member_id = m.member_id
WHERE e.date >= '2025-01-01'
ORDER BY e.date;

-- 5. Update member status to inactive
UPDATE Members
SET status = FALSE
WHERE member_id = 3;
-- 6. Find payouts associated with a specific event type
SELECT 
    p.payout_id,
    p.amount,
    p.date,
    p.reason,
    m.first_name,
    m.last_name,
    e.type,
    e.description
FROM Payouts p
JOIN Members m ON p.member_id = m.member_id
JOIN Events e ON p.event_id = e.event_id
WHERE e.type = 'Charity Drive'
ORDER BY p.date;
