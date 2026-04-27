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
        vector<int> digit;

        if (n % 25 == 0) {
            cout << 0 << endl;
            continue;
        }

        while (n > 0) {
            digit.push_back(n % 10);
            n /= 10;
        }

        reverse(digit.begin(), digit.end());
        int len = digit.size();
        int ans = INT_MAX;


        for (int i = len - 1; i >= 0; i--) {
            if (digit[i] == 0) {
                for (int j = i - 1; j >= 0; j--) {
                    if (digit[j] == 0 || digit[j] == 5) {
                        ans = min(ans, (len - 1 - i) + (i - 1 - j));
                        break;
                    }
                }
                break;
            }
        }

       
        for (int i = len - 1; i >= 0; i--) {
            if (digit[i] == 5) {
                for (int j = i - 1; j >= 0; j--) {
                    if (digit[j] == 2 || digit[j] == 7) {
                        ans = min(ans, (len - 1 - i) + (i - 1 - j));
                        break;
                    }
                }
                break;
            }
        }

        cout << (ans == INT_MAX ? -1 : ans) << endl;
    }

    return 0;
}
