#include <bits/stdc++.h>
using namespace std;
#define MOD (long long)(1e9+7)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        sort(a.begin(), a.end()); 
        sort(b.begin(), b.end()); 

        long long ans = 1;
        for (int i = n - 1; i >= 0; i--) {

            int pos = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            long long cnt = n - pos;

            long long subans = cnt - (n - 1 - i);

            if (subans <= 0||cnt<=0) {
                ans = 0;
                break;
            }
            ans = (ans * (subans % MOD)) % MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}
