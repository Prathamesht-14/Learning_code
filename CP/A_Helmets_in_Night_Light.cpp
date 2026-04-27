#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n,p;
        cin >> n>>p;long long k=n;
        vector<int> a(n),b(n);
        map<int,long long>mpp;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        k--;long long ans=p;
        for (int i = 0; i < n; ++i) {
            mpp[b[i]]+=a[i];
        }
        for(auto it:mpp){
            if(k<=0){break;}
            if(it.first>p){
                ans+=(k*p);k=0;break;
            }else{
               long long  sub=min(k,it.second);
              ans+=(it.first*(sub));
              k-=sub;
            }
        }
        cout<<ans<<endl;
        
    }

    return 0;
}