/*
2. Write a program to print the area of a rectangle by creating a structure named 'Area' having two functions. 
    First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second  
     function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered 
     through keyboard.
*/

#include <iostream>
using namespace std;

struct Area{

    double length;
    double width;

    void setDim(){
        cout<< "Enter the length and width of the rectangle respectively: ";
        cin>>length>>width;
    }

    double getArea(){
        return length*width;
    }

};




int main(){
	
    Area r1;
    r1.setDim();
    cout << "Area will be "<< r1.getArea();
	
	return 0;
}

