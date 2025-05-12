#include <iostream>
#include <vector>
using namespace std;
/*Write a function template palindrome that takes a vector parameter and returns true or false according to whether the vector does or does not read the same forward as backward  (e.g., a vector containing 1, 2, 3, 2, 1 is a palindrome, but a vector containing 1, 2, 3, 4 is not).
*/

template <typename T>
bool checkPali(vector<T> numbers){
    auto a=numbers.begin();
    auto b=--numbers.end();

     while(a<b){
            if(*a!=*b){
                return false;
            }
            ++a, --b;
        }
    return true;

}

int main(){

    vector<int> nums1{1,2,3,2,1};
    vector<int> nums2{1,3,3,2,1}; 
    vector<char> n={'a', 'b','b', 'a'};

    cout<<boolalpha<<checkPali(nums1)<< endl;
    cout<<boolalpha<<checkPali(nums2)<< endl;
    cout<<boolalpha<<checkPali(n)<< endl;
   


   
    

    return 0;
}
