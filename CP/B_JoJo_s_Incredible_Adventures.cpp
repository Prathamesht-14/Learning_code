#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int one = 0, two = 0, curr = 0;

        for (int i = 0; i < 2 * n; ++i) {
            if (s[i % n] == '1') {
                curr++;
                one = max(one, curr);
            } else {
                curr = 0;
                two++;
            }
        }

        int ans;
        if (two > 0) {
            ans = one;
            long long L = ans;
            long long maxi = ( (L + 1) / 2 ) * (L - (L + 1) / 2 + 1);
            cout << maxi << "\n";
        } else {
            ans = one / 2; 
            cout << 1LL * n * n << "\n"; 
        }
    }
    return 0;
}
