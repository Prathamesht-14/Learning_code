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
        int ans=0,i=n-1;
        while(i>=0&&arr[i]==arr[n-1]){
            i--;
        }
        if(i==-1){
            cout<<ans<<endl;
            continue;
        }
        while(i>=0){
            i-=(n-i-1);
            ans++;
            while(i>=0&&arr[i]==arr[n-1]){
                i--;
            }
        }
        cout<<ans<<endl;

        
    }

    return 0;
}