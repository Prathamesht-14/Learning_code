#include <bits/stdc++.h>
using namespace std;

void divisors(long long n, vector<long long>& div) {
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
            if (i != n / i) div.push_back(n / i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), pre(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<long long> div;
        divisors(n, div);

        pre[0] = 0;
        long long maxi = a[0], mini = a[0];
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + a[i];
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
        }

        long long ans = maxi - mini;
        for (auto it : div) {
            if (it == n) continue;
            long long mn = LLONG_MAX, mx = LLONG_MIN;
            for (int i = it; i <= n; i += it) {
                long long sum = pre[i] - pre[i - it];
                mn = min(mn, sum);
                mx = max(mx, sum);
            }
            ans = max(ans, mx - mn);
        }

        cout << ans << "\n";
    }

    return 0;
}
