#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, d;
    cin >> n >> b >> d;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int sum = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= b) {
            sum += a[i];
            if (sum > d) {
                ans++;
                sum = 0;
            }
        }
    }

    cout << ans <<endl;
    return 0;
}
