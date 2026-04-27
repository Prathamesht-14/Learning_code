#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<pair<ll,ll>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = 0;
        }

        pair<ll,ll> global = {0, -1};
        ll sum = 0;
        for (int i = 0; i < n; i++) sum += v[i].first;

        for (ll tm = 1; tm <= q; tm++) {
            int first;
            cin >> first;

            if (first == 1) {
                ll index, num;
                cin >> index >> num;
                index--;

                if (v[index].second > global.second) {
                    sum += (num - v[index].first);
                } else {
                    sum += (num - global.first);
                }

                v[index].first = num;
                v[index].second = tm;
            } else {
                ll val;
                cin >> val;
                global.first = val;
                global.second = tm;
                sum = val * n;
            }

            cout << sum << "\n";
        }
    }
    return 0;
}
