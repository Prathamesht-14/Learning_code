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
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(m), gap(m);
        inputArray(arr);
        sort(arr.begin(), arr.end());

        
        gap[0] = arr[0] - 1 + n - arr[m - 1];

        for (int i = 1; i < m; i++) {
            gap[i] = arr[i] - arr[i - 1] - 1;
        }

        sort(gap.rbegin(), gap.rend());

        ll ans = 0, days = 0;

        for (int i = 0; i < m; i++) {
           
            ll effective = gap[i] - 2 * days;

            if (effective <= 0) continue;
            if (effective == 1) {
                ans += 1;
                days += 1;
            } else {
                ans += effective - 1;
                days += 2;
            }
        }

        cout << n - ans << "\n";
    }

    return 0;
}
