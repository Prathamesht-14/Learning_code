#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> second_elements;
        long long lowestfirst = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            long long m;
            cin >> m;
            vector<long long> a(m);
            for (auto &x : a) {
                cin >> x;
            }
            sort(a.begin(), a.end());
            if (m >= 2) second_elements.push_back(a[1]);
            else second_elements.push_back(a[0]); // handle m=1 case
            lowestfirst = min(lowestfirst, a[0]);
        }
        sort(second_elements.begin(), second_elements.end());
        long long secsum = accumulate(second_elements.begin(), second_elements.end(), 0LL);
        long long ans = lowestfirst + secsum - second_elements[0];
        cout << ans << "\n";
    }

    return 0;
}
