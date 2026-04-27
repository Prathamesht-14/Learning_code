#include <bits/stdc++.h>
using namespace std;

int computeXOR(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int exor = computeXOR(a - 1);
        int ans = a;

        if (exor == b) {
            cout << ans << '\n';
        } else if ((exor ^ b) == a) {
            cout << ans + 2 << '\n';
        } else {
            cout << ans + 1 << '\n';
        }
    }
    return 0;
}
