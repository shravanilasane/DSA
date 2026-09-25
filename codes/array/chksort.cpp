#include<bits/stdtr1c++.h>
using namespace std;
bool chk(int arr[],int size){
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
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
    if(chk(arr,size)==true){
        cout <<"array is sorted";
    }
    else{
        cout <<"array is not sorted";
    }
}