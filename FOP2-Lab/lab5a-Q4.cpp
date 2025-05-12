#include <bits/stdc++.h>
using namespace std;

/*Write a program that uses the map template class to compute a histogram of 
      positive numbers entered by the user. The map’s key should be the number that is     
     entered, and the value should be a counter of the number of times the key has been 
      entered so far. Use -1 as a sentinel value to signal the end of user input.  For  
      example, if the user inputs: 5, 12, 3, 5, 5, 3, 21, -1, then the program should output 
     the following (not necessarily in this order): 
*/

vector<int> acceptInput(){
    vector<int> numbers;
    cout<<"Enter numbers (-1 to terminate): ";
    int n;
    cin>>n;

    while(n!=-1){
        numbers.push_back(n);
        cin>>n;
    }
    return numbers;
}

map<int, int> counter(vector<int> n){
    //initializes the count of each element to 0
    map<int, int> count;
    for(int i:n){
        count[i]=0;
    }
    //count algo
    for(int i:n){
        count[i]++; 
    }

    return count;
}

int main(){

  vector<int>numbers= acceptInput();
  map<int, int> res= counter(numbers);
  cout<<setw(10)<<"\nNumber"<<setw(10)<<"Count\n";

  for(auto pair: res){
    cout<<left<<setw(10)<<pair.first<<setw(10)<<pair.second<<endl;
  }


   
    return 0;
}
