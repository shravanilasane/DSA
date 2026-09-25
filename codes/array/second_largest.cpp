////brutr force approach of finding sec laggest .not compeleted
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int temp[high+1];
    int k=0;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
            k++;
            i++;
    }
    while(j<=high){
        temp[k]=arr[j];
            k++;
            j++;
    }
    int h=0;
    for(int k=0; k<=high; k++){
        arr[h]=temp[k];
        h++;
    }
}
int secondLargest(int arr[], int size){
    for(int i=size-2; i>=0; i--){
        if(arr[i] != arr[size-1])
            return arr[i];
    }
    return -1; // all elements same
}
void MS(int arr[],int low,int high){
    if(low<high){
    int mid= (low+high)/2;
    MS(arr,low,mid);
    MS(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
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
    int low= 0;
    int high= size-1;
    MS(arr,low,high);
    cout <<"largest element is: "<< secondLargest(arr,size);
}