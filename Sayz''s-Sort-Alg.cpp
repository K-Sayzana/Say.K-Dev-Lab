
#include <iostream>
#include <vector>
using namespace std;

vector<int> sayz'sSort(vector<int> nums){
    
    vector<int> snums;
    int min, j=0;
    
    do {
        min=nums[0];
        auto i=nums.begin();
        auto k=nums.begin();
        for(i; i<nums.end(); i++){
           if(*i<min){
               min=*i;
               k=i;
           }
        }
        snums.push_back(min);
        nums.erase(k);
    
    }while(nums.size()!=0);
    
    return snums;
}


int main()
{
    vector<int> num={2, 1 ,3 , 5, 7 ,6}, store;
    store=sort(num);
    
    for(int i : store){
        cout << i << " ";
    }

    return 0;
}
