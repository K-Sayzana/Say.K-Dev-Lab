#include <iostream>
#include <fstream>
/*(Search) A bank’s customer records are to be stored in a file and read into a set of arrays so that a customer’s record can be accessed randomly by account number. Create the file by entering five customer records, with each record consisting of an integer account number (starting with account number 1000), a first name (maximum of 10 characters), a last name (maximum of 15 characters), and a double-precision number for the account balance. After the file is created, write a C++ program that requests a user-input account number and displays the corresponding name and account balance from the file.
*/
using namespace std;

struct customer{
    string fname;
    string lname;
    int acc;
    double balance;
};

int askForAcc(){
    int accNum;
    cout<<"Enter account number: ";
    cin>>accNum;
    return accNum;
}

void readAndStore(string fileName, customer c[]){
    ifstream file(fileName ,ios::in);
    if(!file){
        cout<<"error";
        exit(0);
    }

   for(int i=0; i<5; i++){
       file>>c[i].fname>>c[i].lname>>c[i].acc>>c[i].balance;
    }
}


int checkAcc(int targetAcc, customer c[]){
    for(int i=0; i<5; i++){
        if(c[i].acc==targetAcc) return i;
    }
    return -1;
}

int main(){
    customer C[5];
    int targetAcc=askForAcc();

    readAndStore("acc.txt", C);

    int indx= checkAcc(targetAcc, C);

    if(indx==-1){
        cout<<"asdasasdas";
    }
    else{
        cout<<C[indx].fname<< " "<<C[indx].lname<<" "<<C[indx].balance<<endl;
    }
   

    return 0;
}
