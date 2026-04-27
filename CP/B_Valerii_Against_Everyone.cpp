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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }bool flag=true;map<int,int>mpp;
        for (int i = 0; i < n; ++i) {
          
            mpp[a[i]]++;
           
        }
        for(auto it:mpp){
            if(it.second>1){
                cout<<"YES"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
        
    }

    return 0;
}