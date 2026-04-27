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
        vector<ll> arr(n);
        inputArray(arr);
        map<ll,ll> mpp;
        for(int i=1;i<=60;i++){
            ll cnt=1ll<<i;
           for(int j=0;j<n;j++){
            mpp[arr[j]%cnt]++;
            if(mpp.size()>2){
                
                break;
            }
           }
           if(mpp.size()==2){
            cout<<cnt<<endl;
            break;
           }
           mpp.clear();
        }
    }


    return 0;
}