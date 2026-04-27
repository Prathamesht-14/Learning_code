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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            a[i]= a[i]%k;
        }
        map<int,vector<int>>mpp;
        for (int i = 0; i < n; ++i) {
            if(a[i]==0){
                cout<<i+1<<" ";
            }else{
                mpp[a[i]].push_back(i);
            }
        }
        for(auto it=mpp.rbegin();it!=mpp.rend();it++){
           for(int c: it->second){
             cout<<c+1<<" ";
           }
        }
        cout<<endl;
    }

    return 0;
}