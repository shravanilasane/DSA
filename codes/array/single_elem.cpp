// Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
#include<bits/stdc++.h>
using namespace std;

bool duplicate(int elem,int arr[],int size,int index){
    for(int j=0; j<size; j++){
            if(j!=index && arr[j]==elem){
                return true;
            }
        }
    return false;
}

int single_element(int arr[],int size){
    for(int i=0; i<size; i++){
        if(duplicate(arr[i],arr,size,i)==false){
            return arr[i];
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
    cout << single_element(arr,size);
    
}
// O(n^2)
