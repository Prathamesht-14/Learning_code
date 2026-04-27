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

     long long ans=n*(n+1)/2;
     for(int i=1;i<=n;i<<=1){
        ans-=(2*i);
     }
     cout<<ans<<endl;
       
        
    }

    return 0;
}