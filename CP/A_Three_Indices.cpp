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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        bool found = false;
        for (int i = 1; i < n - 1; ++i) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                cout << "YES\n";
                cout << i << " " << i + 1 << " " << i + 2 << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << "NO\n";
    }

    return 0;
}
