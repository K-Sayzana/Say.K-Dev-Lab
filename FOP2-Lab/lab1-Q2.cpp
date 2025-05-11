/*Write a program that print the right angle triangle pattern of minimum length 5 using ‘*’ as a default symbols. The program should prompt the user to choose either to print default pattern or enter his/her own by entering different symbol and size.
*/

#include <iostream>
using namespace std;

void pattern(){
    int pref;
    cout<<"press 1 to define your own pattern else press anything other than 1 to continue with the default: ";
    cin>> pref;
    if(pref!=1){ //default
        int len=5;
        for (int i=0; i<len; i++){
            for(int j=0; j<=i; j++){
                cout<<"*";
            } 
            cout<< endl;
        }
    }
    else{
        int row;
        char sym;
        cout << "Enter the rows you want display: ";
        cin>>row;
        cout<< "Enter the symbol for the pattern: ";
        cin>>sym;

        for(int i=0; i<row; i++){
            for(int j=0; j<=i;j++){
                cout<<sym;
            }
            cout<<endl;
        }


    }
    
}

int main(){
    pattern();
   

    return 0;
}
