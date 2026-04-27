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
        vector<long long > a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }long long ans=0;
        for (int i = 0; i < n; ++i) {
            if(a[i]==0){
                ans+=1;
            }else{
                ans+=a[i];
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}