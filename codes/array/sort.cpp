// Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. 
//The sorting must be done in-place, without making a copy of the original array.
#include<bits/stdc++.h>
using namespace std;
int sortarr(int arr[],int size){
    int l=0;
    int r=size-1;
    while(l<r){
        if(arr[l]>arr[r]){
            swap(arr[l],arr[r]);
            if(arr[l]==1){
                r--;
            }
            else{
            l++;
            }
        }
        
    }
}
int main(){
    int size;
    cout <<"Enter array size:";
    cin >>size;

    int arr[size];
    cout <<"Enter array :"<<endl;
    for(int i=0; i<size; i++){
        cin >>arr[i];
    }
    sortarr(arr,size);
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
}
