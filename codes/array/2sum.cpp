//Two Sum : Check if a pair with given sum exists in Array
// Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
#include<bits/stdc++.h>
using namespace std;
bool twosum(int arr[],int size,int target){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
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
    int target;
    cout <<"Enter target sum:";
    cin >>target;
    if(twosum(arr,size,target)== true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
//O(n^2)
//try to optimize