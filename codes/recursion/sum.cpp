//sum of first N numbers
#include<bits/stdc++.h>
using namespace std;
//functional way
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }

//parameterized way
void sumall(int n,int sum){
    if(n<1){
        cout << sum;
        return;
    }
    sumall(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    sumall(n,0);
}

