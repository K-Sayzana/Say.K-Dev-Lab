/*Write a C++ program to find the roots of a quadratic function(by passing coefficients as an argument) using function to where the function declaration and definitions are in separate files from the file where the function calling statement is written.
*/

#include <iostream>
using namespace std;

double max(double x, double y){
    return x>y? x: y;
}
double max(double x, double y, double z){
    double a=max(x, y);
    return a>z? a: z;
}


int main(){


return 0;
}

   
