#include <iostream>
using namespace std;

/*
Write a C++ function named larger() that returns the later date of any two dates passed to it. For example, if the dates 10/9/2005 and 11/3/2005 are passed to larger(), the second date is returned and Store the Date structure returned by larger() in a separate Date structure and display the member values of the returned Date. Use pointer as a variable of the structure.
*/

struct Date
{
   int day;
   int month;
   int year;

   Date(int d, int m, int y){
    if((d<1 || d>30) || (m<1 || m>12)){
        cout << "please enter a valid date!!!";
        exit(0);
    }

    day=d;
    month=m;
    year=y;
    
   }
};

Date* large(Date* d1, Date* d2){
    if(d1->year<d2->year)return d2;
    else if(d1->year> d2->year) return d1;

    if(d1->month<d2->month) return d2;
    else if(d1->month>d2->month) return d1;

    if(d1->day<d2->day) return d2;
    else if(d1->day>d2->day) return d1;

    return d1;

}

int main(){

    Date* d1=new Date(3, 4, 2006);
    Date* d2=new Date(4, 4, 2006);


    Date* laterDate = large(d1, d2);
    cout<<"The later day is: ";
    cout<< laterDate->day<< "-" << laterDate->month <<"-"<<laterDate->year;



    return 0;
}
