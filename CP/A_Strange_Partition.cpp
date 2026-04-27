#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n,x;
        cin >> n>>x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long minsum=0;long long maxsum=0;
        for (int i = 0; i < n; ++i) {
            minsum+= a[i];
            maxsum+=((a[i]+x-1)/x);
        }
        cout<<(minsum+x-1)/x<<" "<<maxsum<<endl;
        
    }

    return 0;
}
cpp