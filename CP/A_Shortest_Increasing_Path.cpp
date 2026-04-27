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
        
        ll x,y;
        cin >> x >> y;
        if(x==y)cout<<-1<<endl;
        else if(x<y)cout<<2<<endl;
        else{
            if(y==1||(x-y)==1)cout<<-1<<endl;
            else cout<<3<<endl;
        }
        
    }

    return 0;
}