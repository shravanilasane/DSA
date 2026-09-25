// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range
#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int size){
    int sum=0;
    int arrsum=0;
    for(int i=0; i<=size; i++){
        sum=sum+i;
    }
    for(int i=0; i<size; i++){
        arrsum=arrsum+arr[i];
    }
    return sum-arrsum;
    
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
    cout << missing(arr,size);
    
}