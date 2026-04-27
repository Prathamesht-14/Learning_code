#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        map<long long, vector<int>> mpp;
        for (int i = 0; i < n; ++i) {
            mpp[a[i]].push_back(i);
        }

        bool flag = false;
        for (auto &it : mpp) {
            if (it.second.size() < 2) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << -1 << "\n";
            continue;
        }

       
        for (auto &it : mpp) {
            auto &v = it.second;   
            int k = v.size();
            for (int j = 0; j < k; j++) {
                b[v[j]] = v[(j+1)%k] + 1; 
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
