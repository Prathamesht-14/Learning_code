#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }

        long long ans = 0;

        for (int x = 0; x <= k; x++) {
            int leftIndex = 2 * x;          
            int rightIndex = n - (k - x);  
            if (leftIndex <= rightIndex) {
                long long sum = pref[rightIndex] - pref[leftIndex];
                ans = max(ans, sum);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
