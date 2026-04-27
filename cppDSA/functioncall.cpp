#include<iostream>
using namespace std;
void inc(int& n){
    n++;
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<n;
    // int & k=n; 
    // cout<<k<<endl;;// k i refrence variable
    // k++;
    // cout<<k;
    // // int &t=6; error because 6 is constant

    return 0;
}