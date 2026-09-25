#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"enter number:";
    cin>>n;
    int f1=0;
    int f2=1;
    int f3;
    cout << f1 <<" "<< f2 <<" ";
    for(int i=0;i<n-2;i++){
        f3=f2+f1;
        cout << f3 <<" ";
        f1=f2;
        f2=f3;
        }
}
