#include<bits/stdc++.h>
using namespace std;
int seclargest(int arr[],int size){
    int large=arr[0];
    int seclarge=-1;
    for(int i=1; i<size; i++){
        if(arr[i]>large){
            seclarge=large;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>seclarge){
            seclarge=arr[i];
        }
    }
    return seclarge;
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
    cout <<"second largest element is: "<< seclargest(arr,size);
}
//O(n)