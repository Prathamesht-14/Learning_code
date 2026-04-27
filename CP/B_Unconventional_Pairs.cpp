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
        sort(arr.begin(), arr.end());
       ll mini=INT_MIN;
        for(int i=1;i<n;i+=2){
            mini=max(mini,abs(arr[i]-arr[i-1]));
        }
        cout<<mini<<endl;
        
    }

    return 0;
}