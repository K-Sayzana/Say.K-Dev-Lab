#include<iostream>
using namespace std;

int getSmallestIndex(int arr[], int startIndex, int endIndex){
    
    int i=startIndex, j=endIndex, min=arr[i], minIdx=i;
    
    for(i=i+1; i<=j; i++){
        if(arr[i]<min) {
            minIdx=i;
            min=arr[i];
        }
    }
    
    return minIdx;
}
void swap(int arr[],int indexFirst, int indexSec){
    int i=indexFirst, j=indexSec;
    int temp=arr[i];
    arr[i]= arr[j];
    arr[j]=temp;
}
void selSort(int arr[], int size){
 
    int i=0;
    while(i<size-1){
        int k=getSmallestIndex(arr, i, size-1);
        swap(arr, i, k);
        i++;
    }
}



int main(){
    
    int nums[]={2,4, 7, 5, 1, 8 ,9 ,3}, n=sizeof(nums)/ sizeof(int);
    selSort(nums, n);
    for(int i: nums){
        cout << i << " ";
    }
    
    
    return 0;
}
