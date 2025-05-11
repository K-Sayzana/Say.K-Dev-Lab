#include<iostream>
#include "record.hpp"
using namespace std;

/*
Write a program that accept N student record from the keyboard & store the list on a file “Test.txt” in a text file format. Also write another program that reads students record from the text file “Test.txt” and display on the screen. (tip: create a header file which contain definition of two function getRecord() and displayrecord() and include it in your program).
*/


int main(){

    getRecord();
    displayrecord("test.txt");


    return 0;

}



