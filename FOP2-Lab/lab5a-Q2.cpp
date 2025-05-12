#include <bits/stdc++.h>
using namespace std;

/*Write a template function called findLargestElement that accepts a vector as a 
      parameter and returns the largest element in that vector. Write a driver program to 
      test your function.
*/
template <typename T>
T findLargestElement(vector<T> nums){
    T largest=nums[0];
    for(auto it=++nums.begin(); it!=nums.end(); it++){
        if(*it>largest) largest=*it;
    }

    return largest;
}

int main(){
    vector<int> nums1={11,5,22,7,8};
    vector<double> nums2={4,5,7.9,2.0,7.2};

    cout<<"Largest element of Num1 is "<<findLargestElement(nums1)<<endl;
    cout<<"Largest element of Num2 is "<<findLargestElement(nums2)<<endl;
     




    return 0;
}
