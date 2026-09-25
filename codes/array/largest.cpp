#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int size){
    int large=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}
int main(){
    int size;
    cout <<"Enter array size:";
    cin >>size;

    int arr[size];
    cout <<"Enter array elements:"<<endl;
    for(int i=0; i<size; i++){
        cin >>arr[i];
    }
    cout <<"largest element is: "<< largest(arr,size);
}