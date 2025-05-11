#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Person {
    string name;
    double rate;
    int hours;
    double regPay, OverTimepay, grossPay;

    void calcPay() {
        if(hours <= 40) {
            regPay = hours * rate;
            OverTimepay = 0;
        } else {
            regPay = 40 * rate;
            OverTimepay = (hours - 40) * (1.5 * rate);
        }
        grossPay = regPay + OverTimepay;
    }
};

void generateReport(Person emp[], int size,string filename) {
    ifstream file(filename);
    if(!file.is_open()) {
        cout << "Error opening file.\n";
        return;
    }

    for(int i=0; i<size; i++){
        file>> emp[i].name >> emp[i].rate >> emp[i].hours;
        emp[i].calcPay();
    }

    file.close();
}

void calTotal(Person p[], int size, double& tr, double& to, double& tg){
    for(int i = 0; i < size; i++) {
        tr += p[i].regPay;
        to += p[i].OverTimepay;
        tg += p[i].grossPay;
    }
}

void displayReport(Person emp[], int size) {
    double totalReg = 0, totalOver = 0, totalGross = 0;
    calTotal(emp, size, totalReg, totalOver, totalGross);

    cout << "\n------------ Report Payroll ------------\n";
    cout << left << setw(10) << "Name" << setw(10) << "Rate" << setw(10) << "Hours"
         << setw(15) << "RegularPay" << setw(15) << "OvertimePay" << setw(15) << "GrossPay" << "\n";

    for(int i = 0; i < size; i++) {
        cout << left << setw(10) << emp[i].name << setw(10) << emp[i].rate << setw(10) << emp[i].hours
             << setw(15) << emp[i].regPay << setw(15) << emp[i].OverTimepay << setw(15) << emp[i].grossPay << "\n";
    }
    cout << left << setw(30) << "TOTAL" << setw(15) << totalReg << setw(15) << totalOver << setw(15) << totalGross << "\n";
}

int main() {
    Person employee[4];
    generateReport(employee, 4, "table.txt");
    displayReport(employee, 4);

    return 0;
}
