#include<bits/stdc++.h>
using namespace std;
int freq(int arr[], int size, int q){
    int cnt = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==q){
            cnt++;
        }
    }
    return cnt;
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
    int q;
    cout <<"Enter element to count freq:";
    cin >>q;
    cout << freq(arr,size,q);
}