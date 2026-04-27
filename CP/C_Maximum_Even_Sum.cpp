#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a>>b;
        int n=a+b;
        if(n&1){
           if((a&1)&&(b%4==0))cout<<(a*b/2+2)<<endl;
          else cout<<-1<<endl;
        }else{
           if(a&1&&b&1){
            cout<<a*b+1<<endl;
           }else{
            cout<<(a*b/2+2)<<endl;
           }
        }
        
    }

    return 0;
}