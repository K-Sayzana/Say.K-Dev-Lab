/*
Develop a function-based program that read an integer number and find the square, if it is -ve and otherwise square root. Define a function that accept the number as a parameter and return either the square or the square root.
*/

#include <iostream>
#include <cmath>
using namespace std;


int squareOrRoot(int a) 
{
	if (a<0) return a*a;
	return sqrt(a);
}




int main(){
	cout<< squareOrRoot(-3) << endl;
    cout<< squareOrRoot(36);
	
	return 0;
}

