-- Inserting 5 Members 
INSERT INTO Members (first_name, last_name, contact, join_date, status)
VALUES
    ('Abebe', 'Kebede', '0912345678', '2025-01-01', 1),
    ('Meron', 'Tadesse', '0998765432', '2025-02-01', 1),
    ('Selam', 'Alemu', '0923456789', '2025-03-01', 0),
    ('Yohannes', 'Getachew', '0934567890', '2025-04-01', 1),
    ('Lidya', 'Hailu', '0945678901', '2025-05-01', 1);

-- Insert 8 Contributions (spread across members)
INSERT INTO Contributions (member_id, amount, date, payment_method)
VALUES
    (1, 50.00, '2025-05-10', 'Cash'),
    (1, 75.00, '2025-05-15', 'Mobile Money'),
    (2, 100.00, '2025-05-12', 'Bank'),
    (2, 60.00, '2025-05-18', 'Cash'),
    (3, 80.00, '2025-05-11', 'Mobile Money'),
    (4, 120.00, '2025-05-13', 'Bank'),
    (4, 55.00, '2025-05-16', 'Cash'),
    (5, 90.00, '2025-05-17', 'Mobile Money');

-- Insert 3 Events (associated with members)
INSERT INTO Events (member_id, date, type, description)
VALUES
    (1, '2025-05-14', 'Funeral', 'Funeral for family member'),
    (2, '2025-05-16', 'Memorial', 'Community memorial event'),
    (4, '2025-05-18', 'Funeral', 'Funeral for relative');

-- Insert 3 Payouts (one for each event)
INSERT INTO Payouts (member_id, event_id, amount, date, reason)
VALUES
    (1, 1, 500.00, '2025-05-14', 'Funeral expenses'),
    (2, 2, 300.00, '2025-05-16', 'Memorial support'),
    (4, 3, 450.00, '2025-05-18', 'Funeral costs');
