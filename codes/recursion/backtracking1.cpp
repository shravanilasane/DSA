//N to 1 by backtracking
#include<bits/stdc++.h>
using namespace std;
void print_num(int i, int n){
    if(i>n){
        return;
    }
    else{
    print_num(i+1,n);
    cout << i <<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print_num(1,n);
}