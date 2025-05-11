#include <iostream>
using namespace std;

/*
Assume there are a medical data set(patientID, name, age, and diagnosis) stored on cloud (server computer). A client computer access and process each data groups independently. Use a class data type to demonstrate this scenario.
*/

class Patient{
    private:
        string name;
        int PID;
        int age;
        string diagnosis;
    public:
        void setInfo(string n, int pid, int a, string d){
            name=n;
            PID=pid;
            age=a;
            diagnosis=d;
        }
        void printInfo(){
            cout<<"Name: "<< name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Diagnosed with: "<<diagnosis<<endl;
            cout<<endl;
        }

        int getPID(){
            return PID;
        }

};

class Server{
    public:
        Patient record[100];
        int count=0;
 
        void addInfo(string n, int pid, int a, string d){
            record[count].setInfo(n, pid, a, d);

            count++;
            if(count>100){
                cout<<"Database is exausted!";
                exit(0);
            }
        }
};

class Client{
    public:
        void getInfo(Server s, int pid){
            bool found=false;
            for(int i=0; i<100; i++){
            if (s.record[i].getPID()==pid){
                    s.record[i].printInfo();
                    found=true;
                    break;
            }
            }

            if(!found) cout<<"PID doesn't exist. \n";
        }
};


int main(){

    Server s;
    Client c1, c2;
    
    s.addInfo("matt", 12345, 20, "HIV");
    s.addInfo("joe", 12346, 40, "flu");

    c1.getInfo(s, 12345);
    c2.getInfo(s, 12346);

    

    return 0;
}
