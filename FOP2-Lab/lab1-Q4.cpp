/*
Write an application that read low & high temperature and find daily, weekly, and monthly average temperature. Define two functions named tempFinder with no parameter and 1 integer parameter-length respectively. The program should prompt the user to read number of days in a week and month inside main function. Call the functions with and with out parameter.
*/

#include <iostream>
using namespace std;

void tempFinder() {
    double low, high;
    cout << "Enter the low and high temperature for the day: ";
    cin >> low >> high;
    double avg = (low + high) / 2.0;
    cout << "Daily Average Temperature: " << avg << "°C" << endl;
}

void tempFinder(int length) {
    double sum = 0;
    double temp[length][2];

    
    for (int i = 0; i < length; i++) {
        cout << "Enter the low and high temperature for day " << i+1 << ": ";
        cin >> temp[i][0] >> temp[i][1];
        sum += (temp[i][0]+temp[i][1])/2.0; 
    }
    
    double avg = sum / length;
    cout << "Average Temperature for " << length << " days: " << avg << "°C" << endl;
}

int main() {
    int weekDays, monthDays;
    tempFinder();
    cout << "\nEnter the number of days in a week to calculate weekly average: ";
    cin >> weekDays;
    tempFinder(weekDays); 
    cout << "\nEnter the number of days in a month to calculate monthly average: ";
    cin >> monthDays;
    tempFinder(monthDays); 

    return 0;
}
