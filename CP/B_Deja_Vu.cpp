#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        cin >> n >> q;
        vector<long long> a(n),b(q);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < q; ++i) {
            cin >> b[i];
        }
        long long previous = 31;
        for(int i=0;i<q;i++){
            if(previous > b[i]){
                long long two = 1LL << b[i];  
                for(int j=0;j<n;j++){
                    if(a[j] % two == 0){
                        a[j] += (two >> 1);
                    }
                }
                previous = b[i];
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
