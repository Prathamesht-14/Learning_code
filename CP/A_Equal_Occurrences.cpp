#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
        ll n;
        cin >> n;
        vector<ll> arr(n),b;
        inputArray(arr);
        unordered_map<ll,ll>mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto it:mpp){
            b.push_back(it.second);
        }
        sort(b.begin(),b.end());int m=b.size();ll ans=0;
        for(auto it:b){
            ans=max(ans,it*m);
            m--;
        }
        cout<<ans<<endl;

        
    }

    return 0;
}