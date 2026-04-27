#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       long long n,a,b;
        cin >> n>>a>>b;
        if((n-b)%2==0){
            if(a>b&&((a-b)%2!=0)){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else {
            cout<<"NO"<<endl;
        }
     
        
    }

    return 0;
}