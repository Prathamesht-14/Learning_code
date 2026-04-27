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
        int ans=0;

        int neg=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0) neg++;
            else if(arr[i]==0) ans++;
        }
        ans+=(2*(neg%2));
        cout<<ans<<"\n";

        
    }

    return 0;
}