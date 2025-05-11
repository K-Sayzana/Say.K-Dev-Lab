#include <iostream>
using namespace std;
/*
Define a class product with three members(name, cost, quantity) and define the following functions:
getData(), DispData(), calcRevenue() where  R=cost*quantity, calcTax()(where tax=15% of Revenue), calcProfit() and Do it for N-products
*/

class Product
{

private:
   string name;
   double cost;
   int quantity;

public:

   void getdata(string n, double c, int q){
        name=n;
        cost=c;
        quantity=q;
   }

   void DispData(){
        cout<< "\tName: "<< name <<endl;
        cout<<"\tCost: "<< cost<<endl;
        cout<<"\tQuantity: " << quantity<<endl;
   }
   double calcRevenue(){
        double rev=cost*quantity;
        return rev;
   }
   double calcTax(){
        double tax=calcRevenue()*0.15;
        return tax;
   }
   double calcProfit(){
        double profit=calcRevenue()-calcTax();
        return profit;
   }

};


int main(){
    int size;
    cout<<"Enter the number of products you have sold: ";
    cin>>size;

    Product products[size];
    string name;
    double cost;
    int quantity;

    for(int i=0; i<size; i++){
       cout<<"\nProduct " <<i+1<<": \n";
        cout<<"Name of prodcut: ";
        cin>>name;
        cout<<"How much is the product: ";
        cin>>cost;
        cout<<"How many have you sold: ";
        cin>>quantity;
        products[i].getdata(name, cost, quantity);
        cout<<endl;
    }

    for(int i=0; i<size; i++){
        cout<<"\nProduct " << i+1<<"'s info: \n"; 
        products[i].DispData();
        cout<<"\tRevenue: " << products[i].calcRevenue()<< endl;
        cout<<"\tTax deducted: " << products[i].calcTax()<< endl;
        cout<<"\tProfit: " << products[i].calcProfit()<< endl;
        cout<<endl;
    }
}
