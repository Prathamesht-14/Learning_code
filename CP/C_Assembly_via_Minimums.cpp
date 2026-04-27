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
        vector<ll> arr(n*(n-1)/2),ans(n);
        inputArray(arr);
        map<ll, ll> freq;
        for (ll x : arr) {
            freq[x]++;
        }int count = 0;int m=n-1;int last=1e9
        for(auto &it : freq) {
           while(it.second>0){
            it.second-=m;
            m--;
            count++;
            ans.push_back(it.first);
           }
           last=it.first;

            
        }
        while(count<n){
            ans.push_back(last);
            count++;
            last++;
        }
        
    }

    return 0;
}