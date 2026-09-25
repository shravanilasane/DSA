//N to 1 using recursion
#include<bits/stdc++.h>
using namespace std;
void print_num(int i, int n){
    if(i<1){
        return;
    }
    else{
    cout << i <<endl;
    print_num(i-1,n);
    }
}

int main(){
    int n;
    cin>>n;
    print_num(n,n);
}
