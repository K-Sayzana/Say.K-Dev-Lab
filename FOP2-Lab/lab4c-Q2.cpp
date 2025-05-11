#include <iostream>
using namespace std;


/*Write a function called floatingPointDivide which accepts two parameters, and will always return the double value result of the first parameter divided by the second parameter. This function should work on all other number types. Write this function as a template and ensure that the division returns a floating-point value without using a cast
*/

template <typename T, typename S>
double floatingPointDivide(T num1, S num2){
   return (num1*1.0)/(num2*1.0);
}

int main(){
   cout << floatingPointDivide(2, 1);

   return 0;
}
