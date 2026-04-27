#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> pair[1001];
        vector<ll> index(1001,0);
         for (int i = 1 ;i < n+1; ++i) {
            ll x;
            cin >> x;
            index[x]=i;
        }
        for(int i=1;i<=1000;i++){
             for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                pair[i].push_back(j);
                
            }
        }
        }
       ll ans=-1;
        for(int i=1;i<=1000;i++){
            if(index[i]==0)continue;
            for(auto it:pair[i]){
                if(index[it]==0)continue;
                ans=max(ans,index[i]+index[it]);
            }
        }
         cout << ans << "\n";
        
        
    }

    return 0;
}