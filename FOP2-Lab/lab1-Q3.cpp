/*
Write a function based program to find the square of integer and rational number. Use two function of the same name that accept integer and double parameters by reference. 
*/


#include <iostream>
using namespace std;

int square(int a){
    return a*a;
}

double square(double a){
    return a*a;
}


int main(){

    cout<< square(3)<<endl;
    cout<<square(3.3);

    return 0;
}
