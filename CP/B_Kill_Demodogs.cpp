#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
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
        ll ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
       


     

        cout << ans << "\n";
        
    }

    return 0;
}