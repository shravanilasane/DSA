//Union of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
void arrayunion(int arr[],int size,int arr2[],int size2){
    int size3=size+size2;
    int arr3[size3];
    int i=0;
    int j=0;
    int k=0;
    while(i<size && j<size2){
        if(arr[i]<arr2[j]){
            if(k==0 || arr3[k-1]!=arr[i]){
                arr3[k]=arr[i];
                k++;
            }
            i++;
        }
        else if(arr[i]>arr2[j]){
            if(k==0 || arr3[k-1]!=arr2[j]){
                arr3[k]=arr2[j];
                k++;
            }
            j++;
        }
        else{
            if(k==0 || arr3[k-1]!=arr2[j]){
                arr3[k]=arr2[j];
                k++;
            }
            i++;
            j++;
        }
    }
    while(i<size){
        if(k==0 || arr3[k-1]!=arr[i]){
                arr3[k]=arr[i];
                k++;
            }
            i++;
    }
    while(j<size2){
        if(k==0 || arr3[k-1]!=arr2[j]){
                arr3[k]=arr2[j];
                k++;
        }
        j++;
    }
    cout <<"Union:"<<endl;
    for(int i=0; i<k; i++){
        cout <<arr3[i] <<" ";
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
    int size2;
    cout <<"Enter array size of 2nd array:";
    cin >>size2;

    int arr2[size2];
    cout <<"Enter array :"<<endl;
    for(int i=0; i<size2; i++){
        cin >>arr2[i];
    }
    arrayunion(arr,size,arr2,size2);
    
}
