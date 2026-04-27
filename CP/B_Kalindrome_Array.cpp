#include <bits/stdc++.h>
using namespace std;

bool check(const vector<int>& a, int b) {
    vector<int> c;
    for (int x : a) {
        if (x != b) c.push_back(x);
    }
    for (int i = 0; i < (int)c.size() / 2; i++) {
        if (c[i] != c[c.size() - 1 - i]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool isPalindrome = true;
        for (int i = 0; i < n / 2; i++) {
            if (a[i] != a[n - 1 - i]) {
                if (check(a, a[i]) || check(a, a[n - 1 - i]))
                    cout << "YES\n";
                else
                    cout << "NO\n";
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) cout << "YES\n";
    }

    return 0;
}
