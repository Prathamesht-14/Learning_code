#include <bits/stdc++.h>
using namespace std;

int count_operations(long long a, long long b) {
    int ops = 0;
    while (a > 0) {
        a /= b;
        ops++;
    }
    return ops;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        int min_ops = INT_MAX;
        for (int i = 0; i <= 40; ++i) {
            if (b + i == 1) continue;  

            int total_ops = i + count_operations(a, b + i);
            min_ops = min(min_ops, total_ops);
        }

        cout << min_ops << '\n';
    }

    return 0;
}
