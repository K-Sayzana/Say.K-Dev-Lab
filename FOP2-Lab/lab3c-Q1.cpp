#include <iostream>
using namespace std;
typedef long unsigned int luint; 
/*
Write a structure to store the name, account number and balance of two customers and store their information.\
A - Write a function to print the names of all the customers having balance less than $200.
B - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance. Use pointer as a variable of the structure
*/

struct Account{
    string name;
    luint accountNum;
    double balance=0;
    
    Account(string n, luint accNum, double b){
        name=n;
        accountNum=accNum;
        balance=b;
    }
    
};

void lessThan2Hundred(Account* a){
    if(a->balance<200){
        cout<<a->name<<endl;
    }
}
void greaterThanThousand(Account* a){
    if(a->balance>1000){
       cout<<a->name<<"'s balance has been credited with 100$ \n";
       cout<< "New balance: " << a->balance+100<< "$\n";
    }
}
 

int main(){

    Account* a1, *a2;
    a1=new Account("Sayzana", 1234567, 100);
    a2=new Account("Ezana", 7654321, 1050);
    
    greaterThanThousand(a2);
    lessThan2Hundred(a1);



    



    return 0;
}
