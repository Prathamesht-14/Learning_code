#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,c;
        cin >> n>>c;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());int partition=n;
        for (int i = 0; i < n; ++i) {
            if(a[i]>c){partition=i;break;}

        }int finalans=0;int ans=0;
        for (int i= partition-1;i>=0 ;i--) {
            if(a[i]*pow(2,finalans)>c){
                ans++;
            }else{
                finalans++;
            }

        }
        ans+=(n-partition);
        cout<<ans<<endl;
        
        
        
    }

    return 0;
}