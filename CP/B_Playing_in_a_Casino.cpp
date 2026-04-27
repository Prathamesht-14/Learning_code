#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin >> n>>m;
        vector<vector<ll>> arr(m,vector<ll>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[j][i];
            }
        }
      ll ans=0;
        for(int i=0;i<m;i++)
        {sort(arr[i].rbegin(),arr[i].rend());}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
             ans += arr[i][j] * (n - j - 1) - arr[i][j] * j;

              
            }
            
        }
        cout<<ans<<endl;


        


        
    }

    return 0;
}