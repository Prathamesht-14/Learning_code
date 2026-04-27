#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;long long k;cin>>n>>k;
        if((n%2==0)||(n-k)%2==0){
            cout<<"YES"<<endl;
        }else{
            
            
                cout<<"NO"<<endl;
          
        }
    }
    return 0;
}