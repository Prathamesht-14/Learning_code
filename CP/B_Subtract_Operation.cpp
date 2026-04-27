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
        map<int,bool> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=true;
        }bool flag=false;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i]-k)!=mp.end()){
                cout<<"YES\n";
                flag=true;
                break;
                
            }
        }
        if(!flag)cout<<"NO\n";
        
    }

    return 0;
}