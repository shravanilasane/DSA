//reversing an array using recursion
#include<bits/stdc++.h>
using namespace std;
// void rev(int array[],int l,int r){
//     if(l>=r){
//         return;
//     }
//     swap(array[l],array[r]);
//     rev(array,l+1,r-1);

// }
// int main(){
//     int size;
//     cout <<"enter array size: ";
//     cin >> size;
//     int array[size];
//     cout <<"enter array elements: ";
//     for(int i=0; i<size; i++){
//         cin >> array[i];
//     }
//     int l= 0;
//     int r= size-1;
//     rev(array,l,r);
//     //print rev array
//     for(int i=0; i<size; i++){
//         cout << array[i] << " ";
//     }
// }

//without using too much variables
void rev(int array[],int j,int size){
    if(j>= size/2){
        return;
    }
    swap(array[j],array[size-j-1]);
    rev(array,j+1,size);
}
int main(){
    int size;
    cout <<"enter array size: ";
    cin >> size;
    int array[size];
    cout <<"enter array elements: ";
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    rev(array,0,size);
    //print rev array
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
}