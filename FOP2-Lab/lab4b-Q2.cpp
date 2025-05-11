#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program that permits users to enter the following information about your small company’s 10 employees, sorts the information in ascending ID number, and then writes the sorted information to a file:
       ID No. 	Sex(M/F) 	Hourly-Wage 	Years-with-the-Company
      After the records are stored successfully, 
a, write a program that reads the file created one record at a time, asks for the number of hours each employee worked each month, and calculates and displays each employee’s total pay for the month
b, Develop a program that reads the file created and changes the hourly wage or years for each employee, and creates a new updated file
*/

struct employee {
    int ID;
    char sex;
    double wage;
    int yearWithCompany;
    double monthlyWage;

    employee() {
        monthlyWage = 0;
    }
};

void askInfo(employee e[]) {
    for(int i=0; i<10; i++) {
        cout<<"Enter ID, sex, Hourly-Wage, and Years-with-the-Company of employee "<<i+1<<": ";
        cin>>e[i].ID>>e[i].sex>>e[i].wage>>e[i].yearWithCompany;
    }
}

void sortByID(employee e[]) {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            if(e[j].ID>e[j+1].ID) {
                employee temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
        }
    }
}

void writeSorted(string fileName, employee e[]){
    ofstream file(fileName, ios::out);
    if(!file) {
        cout<<"Error opening file.\n";
        exit(0);
    }
    sortByID(e);
    for(int i=0; i<10; i++){
        file<<e[i].ID<<" "<<e[i].sex<<" "<<e[i].wage<<" "<<e[i].yearWithCompany<<endl;
    }
    file.close();
}

void calcPay(string fileName, employee e[], bool toFile) {
    int hoursWorked;
    for(int i=0; i<10; i++) {
        cout<<"Enter number of hours employee with ID "<<e[i].ID<<" worked this month: ";
        cin>>hoursWorked;
        e[i].monthlyWage = hoursWorked * e[i].wage;
    }

    if(toFile) {
        ofstream file(fileName, ios::out);
        if(!file) {
            cout<<"Error opening file.\n";
            exit(0);
        }
        for(int i=0; i<10; i++) {
            file<<e[i].ID<<" "<<e[i].sex<<" "<<e[i].wage<<" "<<e[i].yearWithCompany<<" "<<e[i].monthlyWage<<endl;
        }
        file.close();
    } else {
        for(int i=0; i<10; i++) {
            cout<<e[i].ID<<" "<<e[i].sex<<" "<<e[i].wage<<" "<<e[i].yearWithCompany<<" "<<e[i].monthlyWage<<endl;
        }
    }
}

void updateInfo(string filename, employee e[]) {
    cout<<"What do you want to update:\n";
    cout<<"1.Hourly wage\n";
    cout<<"2.Years with the company\n";
    int choice;
    cin>>choice;

    int id;
    cout<<"Enter ID of employee: ";
    cin>>id;

    bool found = false;

    if(choice==1) {
        double newWage;
        cout<<"Enter the new Hourly wage: ";
        cin>>newWage;
        for(int i=0; i<10; i++) {
            if(e[i].ID==id) {
                e[i].wage=newWage;
                found=true;
                break;
            }
        }
    } else if(choice==2) {
        int newYear;
        cout<<"Enter the new number of years: ";
        cin>>newYear;
        for(int i=0; i<10; i++) {
            if(e[i].ID==id) {
                e[i].yearWithCompany=newYear;
                found=true;
                break;
            }
        }
    } else {
        cout<<"Invalid choice.\n";
        exit(0);
    }

    if(!found) {
        cout<<"Employee not found.\n";
    } else {
        ofstream file(filename, ios::out);
        if(!file) {
            cout<<"Error opening file.\n";
            exit(0);
        }
        for(int i=0; i<10; i++) {
            file<<e[i].ID<<" "<<e[i].sex<<" "<<e[i].wage<<" "<<e[i].yearWithCompany<<endl;
        }
        file.close();
    }
}

int main() {
    employee e[10];

    askInfo(e);
    writeSorted("emp.txt", e);
    calcPay("emp.txt", e, true);
   
    return 0;
}
