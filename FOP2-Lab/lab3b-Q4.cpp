/*
(Financial) Write a C++ program that uses a structure for storing a stock name, its estimated earnings per share, and its estimated price-to-earnings ratio. Have the program prompt the user to enter these items for three different stocks, each time using the same structure to store the entered data. When data has been entered for a particular stock, have the program compute and display the anticipated stock price based on the entered earnings and price-per-earnings values. For example, if a user enters the data XYZ, 1.56, 12, the anticipated price for a share of XYZ stock is (1.56) × (12) = $18.72. (use pointer structure variable)

*/

#include <iostream>
#include <string>

using namespace std;

struct Financial{
    
    string name;
    double earnPerShare;
    double priceToEarnRatio;

    void setItems(){
        cout<< "Enter the name of the stock: ";
        getline(cin,  name);
        cout<<"Enter estimated earnings per share: ";
        cin>>earnPerShare;
        cout<<"Enter estimated price-to-earnings ratio: ";
        cin>>priceToEarnRatio;
        cin.ignore();
    }

    double stockPrice(){
        return (earnPerShare*priceToEarnRatio);
    }
    


};

int  main(){

    Financial* stock[3];
    

    for(int i=0; i<3; i++){
        stock[i] = new Financial;
        cout << "\nStock " << i + 1 << ":\n";
        stock[i]->setItems();
    }

    cout<<"-----------------------------------------------------------------------\n";
    for(int i=0; i<3; i++){
        
        cout << " \n The price of stock  "<< i+1 << stock[i]->stockPrice() << endl;

    }
    cout<<"----------------------------------------------------------------------- \n";


    for (int i = 0; i < 3; i++) {
        delete stock[i];
    }
    

    return 0;
    
}
