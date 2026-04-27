#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n,l,r;
        cin >> n>>l>>r;
        vector<ll> ans(n+1);
      bool flag=true;
        for(int i=1;i<=n;i++){
            ll answer=(r/i)*i;
            if(answer<l){
                flag=false;
                cout<<"NO"<<endl;break;
            }else   {
                ans[i]=answer;
            }
        }
        if(flag){
            cout<<"YES\n";
            for(int i=1;i<=n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";

        
    }
}
    return 0;
}