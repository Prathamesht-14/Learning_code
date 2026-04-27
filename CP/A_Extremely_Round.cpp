#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin>>n;
       int count=0;
       int s=n;
       while(s>9){
        s=s/10;
        count++;
       } 
       int ans=(count)*9+s;
       cout<<ans<<endl;
    }
    return 0;
}