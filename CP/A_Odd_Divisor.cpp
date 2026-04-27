#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       long long  n;
        cin >> n;
       long long x=n;
       if(x%2==0) {while(!(x&1)){
            x/=2;
        }
        if(x&1){
          if(x>1){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }
        }else{
            cout<<"NO"<<endl;
        }}else{
            
            if(x>1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }

    return 0;
}