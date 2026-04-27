#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<pair<ll, ll>>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i].first >> a[i].second;
    }
}
ll nearest(ll a,ll k, vector<pair<ll, ll>> arr){
   ll mini=LLONG_MAX;
   for(int i=0;i<k;i++){
      mini= min(mini,(abs(arr[i].first-arr[a].first)+abs(arr[i].second-arr[a].second)));
   }
   return mini;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
         --a; 
        --b;
        vector<pair<ll, ll>> arr(n);
        inputArray(arr);
        if((a<k)&&(b<k)){cout<<0<<endl;continue;}
        if(k==0){cout<<abs(arr[b].first-arr[a].first)+abs(arr[b].second-arr[a].second)<<endl;continue;}
        ll mini=abs(arr[b].first-arr[a].first)+abs(arr[b].second-arr[a].second);
        ll mini2=nearest(a,k,arr)+nearest(b,k,arr);
        cout<<min(mini,mini2)<<endl;

       
    
}
return 0;
}
