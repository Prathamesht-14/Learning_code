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
        vector<int> freq(102, 0);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int score = 0;
        for (int i = 0; i <= 101; ++i) {
            if (freq[i] == 0) {
                score = i;
                break;
            } else if (freq[i] == 1) {
                
                score = i + 1;
                break;
            }
        }
        cout << score << "\n";
    }

    return 0;
}
