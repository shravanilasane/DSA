#include<bits/stdc++.h>
using namespace std;
void print_name(int n){
    if(n<1){
        return;
    }
    cout <<"Shravani" <<endl;
    print_name(n-1);
}
int main(){
    int n;
    cin>>n;
    print_name(n);
}