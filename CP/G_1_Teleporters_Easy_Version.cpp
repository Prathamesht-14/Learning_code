#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
        a[i]+=(i+1);
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
        sort(arr.begin(),arr.end());int ans=0;
        for(auto it:arr){
            k-=it;
          
          if(k>=0){
           ans++;
          }
        }
        cout<<ans<<endl;
    }

    return 0;
}