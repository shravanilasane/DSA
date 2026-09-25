//searching element linearly
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int p){
    for(int i=0; i<size; i++){
        if(p==arr[i]){
            return true;
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
    int p;
    cout <<"Enter element:";
    cin >>p;

    if(search(arr,size,p)==true){
            cout <<"element exists";
        }
    else{
            cout << "does not exist";
        }
}
