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
       string s,t;
       cin>>s>>t;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s==t)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    return 0;
}