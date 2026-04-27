#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n,k;
        cin >> n>>k;
        long long s=k;
        vector<long long> a(n*k);
        long long sum=0;
        for (int i = 0; i < n*k; ++i) {
            cin >> a[i];
        }
        long long j=n*k;
        while(s--){
            j-=(n/2 +1);
            sum+=(a[j]);
        }
        
        cout<<sum<<endl;
        
    }

    return 0;
}