//Move all Zeros to the end of the array
#include<bits/stdc++.h>
using namespace std;
void movezero(int arr[],int size){
    int temp[size];
    int k=0;
    for(int i=0; i<size; i++){
        if(arr[i]=!0){
            temp[k++]=arr[i++];
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
    movezero(arr,size);
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }
}
