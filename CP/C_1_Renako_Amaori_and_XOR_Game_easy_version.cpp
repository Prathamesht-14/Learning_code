#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int A = 0, B = 0;
        for (int x : a) A ^= x;
        for (int x : b) B ^= x;

        if (A == B) {
            cout << "Tie\n";
            continue;
        }

        int last_diff = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] != b[i]) {
                last_diff = i + 1;
                break;
            }
        }

        if (last_diff % 2 == 1)
            cout << "Ajisai\n";
        else
            cout << "Mai\n";
    }

    return 0;
}
