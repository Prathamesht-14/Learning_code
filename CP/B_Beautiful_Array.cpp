#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n,k,b,s;
        cin >> n>>k>>b>>s;
        vector<long long> a(n,0);
        long long maxi=(k*b)+((k-1)*n);
        long long mini=k*b;
        if(s>=mini&&s<=maxi){
            a[n-1]=k*b;
            long long remain=s-(k*b);
            for(int i=0;i<n&&remain>0;i++){
                long long mini=min(k-1,remain);
                a[i]+=mini;
                remain=remain-mini;
            }
             for(int i=0;i<n;i++){
                
                cout<<a[i]<<" ";
                
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

    return 0;
}