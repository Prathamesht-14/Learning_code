#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans(vector<ll> arr,int h){
    ll ans =0;
    for(auto it:arr){
       if (h > it) ans+=(h-it);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,a;
        cin >> n>>a;
        vector<ll> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        long long maxi=*max_element(arr.begin(),arr.end());
        long long  s=1;int answer=s;
        long long e=a+maxi;bool flag=true;
        while (s <= e) {
    ll mid = (s + e) / 2;
    if (ans(arr, mid) <= a) {
        answer = mid;   
        s = mid + 1;    
    } else {
        e = mid - 1;   
    }
      }
     cout << answer << "\n";

        
        
    }

    return 0;
}