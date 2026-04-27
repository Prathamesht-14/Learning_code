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
        vector<ll> arr(n);
        inputArray(arr);
       ll ans=0;
        for(int i=0;i<n;i++){
            ans=__gcd(ans,abs(arr[i]-arr[n-i-1]));
        }
        cout<<ans<<endl;
    }

    return 0;
}