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
        vector<ll> arr(n),prefix(n);
        inputArray(arr);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        ll maxi=1;ll sum=prefix[n-1];
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,(__gcd(prefix[i],sum-prefix[i])));
        }
        cout<<maxi<<endl;

        
    }

    return 0;
}