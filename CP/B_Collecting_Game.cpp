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
        vector<long long> a(n),pre(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<pair<long long,long long>>v;
        for (int i = 0; i < n; ++i) {
           v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        pre[0]=v[0].first;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i].first;
        }
        for(int i=0;i<n;i++){
          int j=i;
          int found=i;
          while(j<n){
            pair<long long,long long>temp={pre[j]+1,LLONG_MIN};
            long long index=lower_bound(v.begin(), v.end(), temp) - v.begin();
            index--;
            if(index==j){
                break;
            }
            found+=index-j;
            j=index;
            
          }a[v[i].second]=found;
        }
        for (int i = 0; i < n; ++i) {
            cout <<a[i]<<" ";
        }
        cout<<endl;

        
    }

    return 0;
}