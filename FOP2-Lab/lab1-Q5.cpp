/*
Write a program that find a factorial of a number and also generate a Fibonacci series about it using
Loop 
Function 
*/

#include <iostream>
using namespace std;

void fibAndfact(int n){

        int fact=1;
        for(int i=n; i>=1; i--){
            fact*=i;
        }
        cout<<"Factorial of the number: "<< fact<<endl;
        int a=0, b=1;
        cout<<"Fibonacci numbers upto the number: \n";
        curr=a;
        while(curr<=n){
            cout<<curr<<" ";
            
        }

        }
   
int main(){

    fibAndfact(5);

    

    return 0;
}
