/*
1. Given a structure a specification to store the details of two students (roll-no, name, marks in five subject, BoD   
    which student's type is Date struct), write a program to input each student's detail using function and perform  
    the following;
Compute average score for each student and print the students’ details in tabular format along with their scores
Determine and print student’s details who scored average mark below 50
*/
#include <iostream>
using namespace std;

struct Date{
	int day;
	int month;
	int year;
};

struct Student{
	string name;
	int rollNo;
	double marks[5];
	Date DoB;
	
	void get_info(){
		
		cout<< "Enter student name: ";
		cin>> name;
		cout<< "Enter student's roll number: ";
		cin>>rollNo;
		cout<< "Enter students date, month and year of birth, respectively: ";
		cin>> DoB.day >> DoB.month>>DoB.year;
		
		for(int i=0; i<5; i++){
			cout << "Enter students mark " << i+1<<": ";
			cin>>marks[i];
		}
		
}

	double get_average(){
		double total=0;
		for(int i=0; i<5; i++){
				total+=marks[i];
			} 
		return total/5;
	}
	
	void printInfo(){
		cout<< "Student's Info: \n";
		cout<< "Name: " <<name << endl;
		cout<< "Roll NO: " << rollNo << endl;
		cout<< "Date of Birth: " << DoB.day <<"-" << DoB.month << "-" << DoB.year << endl;
		cout << "Average mark: " << get_average() << endl;
		
	} 
	
};






int main(){
	
    Student s1;
    s1.get_info();
    s1.printInfo();
	

	
	return 0;
}

