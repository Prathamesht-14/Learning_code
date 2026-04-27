#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> firstPos(26, -1);

        for (int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            if (firstPos[c] == -1) {
                firstPos[c] = i;
            }
        }

        ll ans = 0;
        for (int c = 0; c < 26; c++) {
            if (firstPos[c] != -1) {
                ans += (n - firstPos[c]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
