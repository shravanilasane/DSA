//1 to N using recursion
#include<bits/stdc++.h>
using namespace std;
void print_num(int i, int n){
    if(i>n){
        return;
    }
    else{
    cout << i <<endl;
    print_num(i+1,n);
    }
}

int main(){
    int n;
    cin>>n;
    print_num(1,n);
}
