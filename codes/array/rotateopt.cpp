// Given an integer array nums, rotate the array to the left by k (optimal) by reversing parts of array
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}
void rotate(int arr[],int size,int k){
    k=k%size;
    reverse(arr,0,size-1);
    reverse(arr,size-k,size-1);
    reverse(arr,0,size-k-1);

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
