/*
Write the C++ program for a void function that receives three double variables: the first two by value and the last one by reference. Name the formal parameters n1, n2, and answer. The function should divide the n1 variable by the n2 variable and then store the result in the answer variable. Name the function calcQuotient. Also write an appropriate function prototype for the calcQuotient function. In addition, write a statement that invokes the calcQuotient function, passing it the actual parameters num1, num2, and quotient variables.

*/

#include <iostream>
#include <cmath>
using namespace std;

void calcQuotient(double n1, double n2, double &answer)
{ 
	if (n2!=0.0) answer = n1/n2; 
}


int main(){
    double num1=9, num2=3, quotient; 
    calcQuotient(num1, num2, quotient);

    cout<< quotient;
	
	return 0;
}
