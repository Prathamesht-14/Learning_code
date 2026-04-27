#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string current = x;
        int operations = 0;
        bool found = false;

        // Try up to 25 times as max n*m ≤ 25, so max length needed is small
        for(int i = 0; i <= 5; ++i) {
            if(current.find(s) != string::npos) {
                cout << operations << endl;
                found = true;
                break;
            }
            current += current;  // Doubling
            operations++;
        }

        if(!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
