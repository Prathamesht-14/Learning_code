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
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            int ans;
            if(i==0){
             ans=arr[i+1];
            }else if(i==n-1){
             ans=arr[i-1];
        }else{
             ans=arr[i-1]+arr[i+1];
        }
            if(ans<arr[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;}
            else{
            cout<<"NO"<<endl;
            }
        
    }

    return 0;
}