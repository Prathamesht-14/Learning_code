#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n>> k;
       
        vector<long long> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
       
       long long ans=0,sum=0,maxi=0;
        for(int i=0;i<min(n,k);i++){
              sum+=a[i];
              maxi=max(maxi,b[i]);
              long long subans=sum+(k-(i+1))*maxi;
              ans=max(ans,subans);

        }
        cout<<ans<<endl;
    }

    return 0;
}