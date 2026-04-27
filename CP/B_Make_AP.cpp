#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool possible = false;

        
        int x = 2 * b - c;
        if (x > 0 && x % a == 0) possible = true;

   
        if ((a + c) % 2 == 0) {
            int y = (a + c) / 2;
            if (y > 0 && y % b == 0) possible = true;
        }

     
        int z = 2 * b - a;
        if (z > 0 && z % c == 0) possible = true;

        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
