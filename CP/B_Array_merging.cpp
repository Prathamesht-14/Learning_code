#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        map<int,int>mpp1;map<int,int>mpp2;
        int length=1;
        for(int i=0;i<n-1;i++){
           if(a[i]==a[i+1]){
               length++;
           }else{
            int k=mpp1[a[i]];
            mpp1[a[i]]=max(k,length);
            length=1;
           }
        }
       mpp1[a[n-1]]=max(length,mpp1[a[n-1]]);
         length=1;
        for(int i=0;i<n-1;i++){
           if(b[i]==b[i+1]){
               length++;
           }else{
            int k=mpp2[b[i]];
            mpp2[b[i]]=max(k,length);
            length=1;
           }
        }mpp2[b[n-1]] = max(mpp2[b[n-1]], length); int ans=0;
        for(auto &p:mpp1){
            if(mpp2.find(p.first)!=mpp2.end()){
                ans=max(ans,(p.second+mpp2[p.first]));
            }else{
                ans=max(ans,p.second);
            }
        }
        for(auto &p:mpp2){
            if(mpp1.find(p.first)==mpp1.end()){
               ans=max(ans,p.second);
            }
        }
        cout<<ans<<endl;
        
        
        
    }

    return 0;
}