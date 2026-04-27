#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    long long amount;
    cin >> amount;

    int numHorror, numHi;
    cin >> numHorror >> numHi;

    vector<pair<int, int>> horror;
    for (int i = 0; i < numHorror; i++) {
        int r, p;
        cin >> r >> p;
        horror.push_back({r, p});
    }

    int numSciFi, numS;
    cin >> numSciFi >> numS;
    vector<pair<int, int>> scifi;
    for (int i = 0; i < numSciFi; i++) {
        int r, p;
        cin >> r >> p;
        scifi.push_back({r, p});
    }

    const long long NEG_INF = -1e18;

    vector<long long> dp1(amount + 1, NEG_INF);
    dp1[0] = 0;
    for (auto &book : horror) {
        int r = book.first;
        int p = book.second;
        if (p > amount) continue;
        for (int j = amount; j >= p; j--) {
            if (dp1[j - p] != NEG_INF) {
                if (dp1[j] < dp1[j - p] + r) {
                    dp1[j] = dp1[j - p] + r;
                }
            }
        }
    }

    vector<long long> dp2(amount + 1, NEG_INF);
    dp2[0] = 0;
    for (auto &book : scifi) {
        int r = book.first;
        int p = book.second;
        if (p > amount) continue;
        for (int j = amount; j >= p; j--) {
            if (dp2[j - p] != NEG_INF) {
                if (dp2[j] < dp2[j - p] + r) {
                    dp2[j] = dp2[j - p] + r;
                }
            }
        }
    }

    vector<long long> max2(amount + 1, NEG_INF);
    if (amount >= 0) {
        for (int j = 1; j <= amount; j++) {
            max2[j] = max(max2[j - 1], dp2[j]);
        }
    }

    long long ans = NEG_INF;
    for (int c1 = 1; c1 <= amount; c1++) {
        if (dp1[c1] == NEG_INF) continue;
        long long rem = amount - c1;
        if (rem < 0) break;
        if (max2[rem] == NEG_INF) continue;
        long long candidate = dp1[c1] + max2[rem];
        if (candidate > ans) {
            ans = candidate;
        }
    }

    if (ans == NEG_INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}