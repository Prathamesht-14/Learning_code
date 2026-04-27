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
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        inputArray(arr);

        sort(arr.begin(), arr.end());

        vector<ll> prefix(n);
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + arr[i];

        ll sum = 0;
        ll ans = 0;

        for (int i = 0; i < n; i++) {
            if (prefix[i] > x) break;
            ll days = (x - prefix[i]) / (i + 1) + 1;
            ans += days * (i + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}
