#include<bits/stdtr1c++.h>
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
int seclargest(int arr[],int size){
    int large=largest(arr,size);
    int seclarge=-1;
    for(int i=0; i<size; i++){
        if(arr[i]>seclarge && arr[i]<large){
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
    cout <<"largest element is: "<< largest(arr,size);
    cout <<"second largest is: "<<seclargest(arr,size);
}

//O(2n)