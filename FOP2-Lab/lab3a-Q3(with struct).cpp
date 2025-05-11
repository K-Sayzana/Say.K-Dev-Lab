/*
3. Write a C++ program that read low & high temperature of each day and find daily and weekly average 
     temperature. Using .
         a) structure
         b) class 
*/
#include <iostream>
using namespace std;

struct DailyTemp{
    double high;
    double low;

    double GetAvg(){
        return (high+low)/2;
    }
};

double getWeeklyAvg(DailyTemp weekTemps[]){
    double total=0;
    for(int i=0; i<7; i++){
        total+=weekTemps[i].GetAvg();
    }

    return total/7;
}

int main(){

   
   DailyTemp week[7];

   for(int i=0; i<7; i++){
    cout<<"Enter day " << i+1 << "'s highest and lowest temperature respectively: ";
    cin >>week[i].high >> week[i].low;
   }

   cout<< "Daily average: \n";
   for(int i=0; i<7; i++){
    cout<<"High "<<week[i].high<< << " Low:" << week[i].low<< " Daily avg: "<< week[i].GetAvg() << endl;
   }

   cout<<"This weeks average temperature is " <<  getWeeklyAvg(week);


   



    return 0;
}
