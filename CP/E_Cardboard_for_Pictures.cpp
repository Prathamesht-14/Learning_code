#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll check(vector<ll>& a,ll w,ll c){
    ll ans=0;
    for(auto it:a){
        ans+=1ll*((it+2*w)*(it+2*w));
        if(ans>c)break;
    }

    return ans;
}
void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n,w;
        cin >> n>>w;
        vector<ll> arr(n);
        inputArray(arr);
       ll s=0;ll e=1e9;ll ans=1;
        while(s<=e){
            ll m=(s+e)/2;
             if(check(arr,m,w)<=w){s=m+1;
                  ans=m;}
            else e=m-1;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}