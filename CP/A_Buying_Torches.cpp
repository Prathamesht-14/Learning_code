#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long ans = k; 
        long long total = (y + 1) * k - 1;

        long long subans = (total + x - 2) / (x - 1);

        cout << ans + subans << '\n';
    }

    return 0;
}
