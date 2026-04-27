#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll,ll>> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].second=i+1;

        }
        sort(arr.begin(),arr.end());
        int count=0;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(arr[i].first*arr[j].first>2*n)continue;
                if(arr[i].second+arr[j].second==arr[i].first*arr[j].first){
                    count++;
                }

            }
        }
        cout<<count<<endl;
       
        
    }

    return 0;
}