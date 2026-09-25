// Given an integer array nums, rotate the array to the left by one.
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int size){
    int temp=arr[0];
    for(int i=1; i<size; i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
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
    rotate(arr,size);
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }
}
//O(n)