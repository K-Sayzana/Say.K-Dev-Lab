/*
Show how to declare the following constants using an enum statement:
	WINTER =1, SPRING = 2, SUMMER = 3 and FALL = 4.

*/

#include <iostream>
using namespace std;

enum season{
    WINTER =1,
    SPRING,
    SUMMER,
    FALL
};

int main(){

    season s1=WINTER;
    s1=FALL;

    cout<< s1;
   
  


    return 0;
}
