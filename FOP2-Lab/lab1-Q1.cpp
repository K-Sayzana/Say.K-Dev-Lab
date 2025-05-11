/*
Write a function based C++ program that find the Fibonacci series of a given number. Define a function named fibonacci that has one argument with default argument and returns integer. The function is called both with parameter and without parameter. 
*/
#include <iostream>
using namespace std;

void  fibonacci(int num){

    int a=0, b=1;
    int curr, next;
    for(int i=3; i<num; i++){
        curr=a+b;
        next=curr+b;
        a=curr;
        b=next;
    }
    cout << curr;
    return;


   
}


int  main(){

fibonacci(6); // 0 1 1 2 3 5 8

    return 0;
}
