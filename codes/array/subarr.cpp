//Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
#include<bits/stdc++.h>
using namespace std;
int maxcount=0;
// int subarr(int arr[],int size,int k){
//     int sum=0;
//     int count=0;
//     for(int i=0; i<size; i++){
//         sum= sum + arr[i];
//         count++;
//         if(sum==k){
//             maxcount= max(count,maxcount);
//             count=0;
//             sum=0;
//             i--;
//         }
//         if(sum>k){
//             count=0;
//             sum=0;
//             i--;
//         }
//     }
//     return maxcount;
// }

//sliding window
// int subarr(int arr[],int size,int k){
//     int l=0;
//     int sum=0;
//     int count=0;
//     for(int r=0; r<size; r++){
//         sum=sum +arr[r];
//         count++;
//         if(sum>k){
//             sum = sum -arr[l];
//             count--;
//             l++;
//         }
//         if(sum==k){
//             maxcount= max(count,maxcount);
//             sum= sum -arr[l];
//             count--;
//             l++;
//         }
//     }
//     return maxcount;
// }
//Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.
int subarr(int arr[],int size,int k){
    
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
    cout <<"enter sum k:";
    cin >>k;

    cout << subarr(arr,size,k);
}
