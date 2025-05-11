#include<iostream>
#include<fstream>
using namespace std;


void getRecord(){

    int size;
    cout<<"How many student info do u want to record: ";
    cin>>size;
    // info to be recorded
    string name;
    string id;
    int age;

   fstream file("test.txt", ios::out);
   if(!file) {
        cout<<"Fail to open text.txt !!!";
        exit(0);
   }

   for(int i=0; i<size; i++){
    file<<"\nStudent "<< i+1<<"'s info: \n";
    cout<<"Enter the name of student "<<i+1<<": ";
    cin>>name;
    file<<"Name: " << name<<endl;
    cout<<"Enter the ID number of student "<<i+1<<": ";
    cin>>id;
    file<<"ID number: " << id<<endl;
    cout<<"Enter the age of student "<<i+1<<": ";
    cin>>age;
    file<<"Age: " << age<<endl;
    cout<<endl;
   }

}

void displayrecord(string filename){
    fstream file(filename, ios::in);
    if(!file){
        cout<<"Fail to open the file.";
        exit(0);
    }
    string lines;
    while(!file.eof()){
        getline(file, lines);
        cout<<lines<<endl;
    }

}
