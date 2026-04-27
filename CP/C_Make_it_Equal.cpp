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
        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        map<long long ,long long>mpp1;
        for (int i = 0; i < n; ++i) {
            mpp1[a[i]%k]++;
            
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            long long  m=b[i]%k;
            long long p=k-m;
            if(mpp1[m]>0){
                mpp1[m]--;
            }else if(mpp1[p]>0){
                mpp1[p]--;
            }else{
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
            
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        
    }

    return 0;
}