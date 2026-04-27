#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n>>a>>b;
        if((a==b&&b==n)||((a+b+2)<=n)){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }

    return 0;
}