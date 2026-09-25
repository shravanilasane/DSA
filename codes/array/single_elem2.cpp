// Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
#include<bits/stdc++.h>
using namespace std;

int single_element(int arr[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans =ans ^arr[i];
    }
    return ans;
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
    cout << single_element(arr,size);
}