# Eder Management System

**A database-driven solution for managing Ethiopian Eder (Idir) associations**

## Author  
**Sayzana Kibru**  
Addis Ababa Science and Technology University  
  

---

## Project Description  
This project is a Digital Eder Management System designed to modernize traditional Ethiopian mutual aid societies (Eder/Idir) by replacing manual record-keeping with an efficient digital solution. The system tracks members, contributions, payouts, and events while ensuring data integrity and providing comprehensive reporting.

## Key Features  
- Member management with contact details and status tracking  
- Contribution recording with payment method tracking  
- Event logging (funerals, emergencies, etc.)  
- Payout management linked to specific events  
- Comprehensive reporting views  
- Data integrity enforcement through constraints  

## Technology Stack  
- Database: MySQL 8.0.42  
- Design Tool: MySQL Workbench  
- Documentation: Microsoft Word  

## Repository Structure  
## Project Structure

```text
/Eder-Management-System
│
├── /docs
│   ├── DBass.docx             # Complete project documentation
│   └── ERD.png                # Entity Relationship Diagram
│
├── /sql
│   ├── table_definitions.sql # SQL for creating all tables
│   ├── sample_data.sql       # Sample data insertion scripts
│   ├── test_queries.sql      # Basic SELECT queries for testing
│   └── report_views.sql      # Views for generating reports
│
└── README.md                 # This file
```

## Getting Started  
1. **Prerequisites**:  
   - MySQL Server (8.0 or higher recommended)  
   - MySQL Workbench (optional but recommended)  

2. **Installation**:  
   - Clone this repository  
   - Execute the SQL scripts in order:  
     1. `table_definitions.sql`  
     2. `sample_data.sql`  
     3. `report_views.sql`  

3. **Testing**:  
   - Run the queries in `test_queries.sql` to verify the database is working  
   - Test constraints by attempting invalid operations (duplicate contacts, etc.)  

## Usage Examples  
- Track member contributions: `SELECT * FROM Contributions WHERE member_id = [ID]`  
- Generate payout report: `SELECT * FROM PayoutSummary`  
- View recent events: `SELECT * FROM RecentEvents`  

## Future Enhancements  
Planned improvements include:  
- Web/mobile interface development  
- Mobile money integration  
- Advanced reporting with PDF/Excel export  
- Document upload system for event verification  

## Contributing  
Contributions are welcome! Please fork the repository and create a pull request with your proposed changes.  

## License  
Copyright (c) 2025 Sayzana Kibru

All rights reserved. This project is submitted as academic work at Addis Ababa Science and Technology University.
## Acknowledgments  
- Addis Ababa Science and Technology University  
- Mr. Befekadu (Project Advisor)  
- Traditional Eder communities in Ethiopia  

---

*Submitted as Final Project for Database Design Course • May 2025*
