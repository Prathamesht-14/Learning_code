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
        if(arr[0]!=1){
            cout << "NO" << "\n";
            continue;
        }
        ll sum=1;bool flag=true;
        for(int i=1;i<n;i++){
            if(arr[i]>sum){
                cout << "NO" << "\n";
                flag=false;
                break;
            }
            sum+=arr[i];
            
        }
        
                if(flag)cout << "YES" << "\n";
            
        
    }

    return 0;
}