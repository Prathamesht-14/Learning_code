#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll ans = 0;
        vector<int> removed(n + 1, 0);  

        for (int k = 1; k <= n; k++) {
            for (int j = k; j <= n; j += k) {
                if (s[j - 1] == '1') break; 
                if (removed[j] == 0) {
                    ans += k;
                    removed[j] = 1;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
