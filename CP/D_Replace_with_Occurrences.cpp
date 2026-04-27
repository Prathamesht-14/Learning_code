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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int,int> mpp;                
        map<int,vector<int>> mpp2;       
        for (int i = 0; i < n; i++) {
            mpp[a[i]]++;
            mpp2[a[i]].push_back(i);
        }

        bool ok = true;
        int id = 1;

        for (auto it : mpp) {
            int val = it.first;
            int freq = it.second;

            if (freq % val != 0) { 
                ok = false;
                break;
            }

            
            while (!mpp2[val].empty()) {
                for (int j = 0; j < val; j++) {
                    int idx = mpp2[val].back();
                    mpp2[val].pop_back();
                    b[idx] = id;
                }
                id++;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
