#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<char> ans(n, '+');
        int one = 0, zero = 0, two = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == '1') one++;
            else if (s[i] == '0') zero++;
            else if (s[i] == '2') two++;
        }

        for (int i = 0; i < zero; i++) ans[i] = '-';
        for (int i = n - 1; i >= n - one; i--) ans[i] = '-';

        int left = zero, right = n - one - 1;
        int remainingTwo = two;
        while (remainingTwo > 0 && left <= right) {
            ans[left] = '?';
            ans[right] = '?';
            left++;
            right--;
            remainingTwo--;
        }

        if ((n - one - zero) <= two) {
            for (int i = 0; i < n; i++) {
                if (ans[i] == '?') ans[i] = '-';
            }
        }

        for (int i = 0; i < n; i++) cout << ans[i];
        cout << '\n';
    }

    return 0;
}
