CREATE TABLE IF NOT EXISTS Members (
    member_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    contact VARCHAR(10) UNIQUE,
    join_date DATE,
    status BOOLEAN
);

CREATE TABLE IF NOT EXISTS Contributions (
    contributer_id INT PRIMARY KEY AUTO_INCREMENT,
    member_id INT,
    amount DECIMAL(10,2),
    date DATE,
    payment_method VARCHAR(20),
    FOREIGN KEY (member_id) REFERENCES Members(member_id)
);

CREATE TABLE IF NOT EXISTS Events (
    event_id INT PRIMARY KEY AUTO_INCREMENT,
    member_id INT,
    date DATE,
    type VARCHAR(50),
    description VARCHAR(250),
    FOREIGN KEY (member_id) REFERENCES Members(member_id)
);

CREATE TABLE IF NOT EXISTS Payouts (
    payout_id INT PRIMARY KEY AUTO_INCREMENT,
    member_id INT,
    event_id INT,
    amount DECIMAL(10,2),
    date DATE,
    reason VARCHAR(255),
    FOREIGN KEY (member_id) REFERENCES Members(member_id),
    FOREIGN KEY (event_id) REFERENCES Events(event_id)
);
