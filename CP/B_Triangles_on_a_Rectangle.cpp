#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n>>k;
        vector<long long> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        bool flag=true;long long ans=a[0],maxi=0,i=1;
        while(k--&&i<n){
            maxi=max(b[i-1],maxi);
            if(k==1){
                ans+=(max(maxi,a[i]));
            }
            if(b[i-1]>a[i]&&flag){
                ans+=b[i-1];
                flag=false;
            }else{
                ans+=a[i];
                i++;
            }
            
        }
        ans+=(k*maxi);
        cout<<ans<<endl;

    }

    return 0;
}