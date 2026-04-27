#include <bits/stdc++.h>
using namespace std;

bool isValid(long long g, const vector<long long>& a, int start) {
    if (g <= 1) return false;  
    for (int i = start; i < (int)a.size(); i += 2) {
        if (a[i] % g == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long gcd_even = a[0], gcd_odd = (n > 1 ? a[1] : 0);

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) gcd_even = __gcd(gcd_even, a[i]);
            else gcd_odd = __gcd(gcd_odd, a[i]);
        }

        if (isValid(gcd_odd, a, 0)) {
            cout << gcd_odd << "\n";
        } else if (isValid(gcd_even, a, 1)) {
            cout << gcd_even << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}
