#include <bits/stdc++.h>
using namespace std;
#define ll long long

void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) cin >> a[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> x(n), y(n), positive, negative;

        inputArray(x);
        inputArray(y);

        for (int i = 0; i < n; i++) {
            ll d = y[i] - x[i];
            if (d >= 0) positive.push_back(d);
            else negative.push_back(d);
        }

        // SORT FIX
        sort(positive.begin(), positive.end());      
        sort(negative.begin(), negative.end());      

        vector<bool> used(negative.size(), false);

        int ans = 0;

       
        for (int i = 0; i < (int)positive.size(); i++) {
            for (int j = 0; j < (int)negative.size(); j++) {
                if (!used[j] && positive[i] + negative[j] >= 0) {
                    used[j] = true;
                    ans++;
                    break;
                }
            }
        }

       
        int remainingPos = positive.size() - ans;
        ans += remainingPos / 2;

        cout << ans << "\n";
    }

    return 0;
}
