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
        ll a, b, n;
        cin >> a >> b >> n;
        if (a == b || a >= b * n) cout << 1 << '\n';
        else cout << 2 << '\n';
    }

    return 0;
}
