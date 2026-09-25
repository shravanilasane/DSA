//Remove Duplicates in-place from Sorted Array using two pointer method
#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int size){
    int i=0;
    for(int j=1; j<size; j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int size;
    cout <<"Enter array size:";
    cin >>size;

    int arr[size];
    cout <<"Enter sorted array :"<<endl;
    for(int i=0; i<size; i++){
        cin >>arr[i];
    }
    cout << "no of unique elements :" << removeDuplicate(arr,size);
}
