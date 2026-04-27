#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        
        ll z = lcm(x, y);
        ll common = n / z;
        ll x1 = n / x - common;
        ll y1 = n / y - common;

        ll sumL = x1 * (2 * n - x1 + 1) / 2;
        ll sumS = y1 * (y1 + 1) / 2;

        ll ans = sumL - sumS;
        cout << ans << "\n";
    }
    return 0;
}
