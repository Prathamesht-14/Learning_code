#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        inputArray(arr);
        map<ll, ll> mpp;
        for (ll x : arr) mpp[x]++;

        ll ans = 0;

        while (!mpp.empty()) {
    auto it1 = mpp.begin();
    ll prev = it1->first - 1;
    bool newGroup = true;

    for (auto it = mpp.begin(); it != mpp.end(); ) {
        if (newGroup || it->first != prev + 1) {
            ans++;
            newGroup = false;
        }

        prev = it->first;
        it->second--;

        if (it->second == 0)
            it = mpp.erase(it);
        else
            ++it;
    }
}


        cout << ans << "\n";
    }

    return 0;
}
