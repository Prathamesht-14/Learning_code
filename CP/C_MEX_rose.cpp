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
        ll n,k;
        cin >> n>>k;
        vector<ll> arr(n);
        inputArray(arr);
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        ll ans=0;
        int K=k;
        while(k>0){
            k--;
            if(mp[k]==0){
                ans+=1;

        }
         }
         cout<<max(mp[K],ans)<<endl;
}

    return 0;
}