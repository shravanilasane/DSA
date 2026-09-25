//factorial of first N numbers
#include<bits/stdc++.h>
using namespace std;
//functional way
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

//parameterized way
// void fact(int n,int f){
//     if(n<1){
//         cout << f;
//         return;
//     }

//     fact(n-1,f*n);
// }
int main(){
    int n;
    cin>>n;
    cout << fact(n);
}

