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
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
         vector<pair<long long ,long long>>segment(n);
         for(int i=0;i<n;i++){
            segment[i]={a[i]-x,a[i]+x};
         }
         long long ans=0;
         long long l=segment[0].first;
         long long r=segment[0].second;
       
         for(int i=1;i<n;i++){
            l=max(l,segment[i].first);
            r=min(r,segment[i].second);
            if(l>r){
                ans++;
                l=segment[i].first;
                r=segment[i].second;
            }
         }
         cout<<ans<<endl;

        
    }

    return 0;
}