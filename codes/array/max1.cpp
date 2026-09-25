//Given a binary array nums, return the maximum number of consecutive 1s in the array
#include<bits/stdc++.h>
using namespace std;
int max1(int arr[],int size){
    int cnt=0;
    int max=0;
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>max){
                max=cnt;
            }
        }
        else{
            cnt=0;
        }
    }
    return max;
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
    cout << max1(arr,size);
    
}
