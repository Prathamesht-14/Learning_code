#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int ans = 0;
        for (int i = 0; i < n/2; ++i) {
            for (int j = 0; j < n/2; ++j) {
                int ones = 0, zeros = 0;
                char c1 = a[i][j];
                char c2 = a[j][n-1-i];
                char c3 = a[n-1-i][n-1-j];
                char c4 = a[n-1-j][i];
                ones += (c1 == '1') + (c2 == '1') + (c3 == '1') + (c4 == '1');
                zeros = 4 - ones;
                ans += min(ones, zeros);
            }
        }
        if (n % 2 == 1) {
            int mid = n/2;
            for (int j = 0; j < mid; ++j) {
                int ones = 0, zeros = 0;
                char c1 = a[mid][j];
                char c2 = a[j][mid];
                char c3 = a[mid][n-1-j];
                char c4 = a[n-1-j][mid];
                ones += (c1 == '1') + (c2 == '1') + (c3 == '1') + (c4 == '1');
                zeros = 4 - ones;
                ans += min(ones, zeros);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
