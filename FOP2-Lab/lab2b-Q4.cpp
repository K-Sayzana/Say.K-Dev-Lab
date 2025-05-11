/*
Write a program function-based program that read the two sides of right-angle triangle and find the length of the third side. The function accepts the two sides as a parameter by value and third side by reference and print inside main function.    

*/

#include <iostream>
#include <cmath>
using namespace std;

double tri(double a, double b, double &c)
{
	c=sqrt(a*a + b*b);
	return c;
}


int main(){

	double side1=3, side2=4,  side3;
	tri(side1, side2, side3);

	cout<<"side3: " << side3;


	return 0;
}
