#include <bits/stdc++.h>
using namespace std;
/*Write a program that demonstrate different operations in three sets s1,s2 and s3.
*/

template <typename T>
void printSet(set<T> s){
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
   set<int> s1={3, 1, 5};
   set<double> s2={9.5, 6.1, 2.0};
   set<string> s3={"Ali", "Mo", "Mac"};
   //inital
   cout<<"Initiallly:\n";
   printSet(s1);
   printSet(s2);
   printSet(s3);
   cout<<endl;

   // insert opration
   cout<<"Insert Opration: \n";
   s1.insert(5);
   s1.insert(6);
   s2.insert(4.1);
   s3.insert("VVD");
   printSet(s1);
   printSet(s2);
   printSet(s3);
   cout<<endl;

   //erase and clear
   cout<<"Erasing element: \n";
    s1.erase(1);
    s2.erase(6.1);
    s3.erase("Mo");
    printSet(s1);
    printSet(s2);
    printSet(s3);
    s2.clear();
    printSet(s2);
    cout<<endl;

    //using iterator
    cout<<"itrators: \n";
    auto it1=s1.begin();
    auto it2=--s1.end();
    cout<<"it1: "<< *it1 << " it2 "<< *it2<<endl;

    auto it3=s1.rbegin();
    auto it4=--s1.rend();
    cout<<"it3: "<< *it3<<" it4: "<<*it4<<endl;

    


    return 0;
}
