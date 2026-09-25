// Given an integer array nums, rotate the array to the right by k places.
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int size,int k){
    for(int j=1; j<=k; j++){
    int temp=arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
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

    int k;
    cout <<"Enter k:";
    cin >>k;

    rotate(arr,size,k);
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }
}
//O(k*n)