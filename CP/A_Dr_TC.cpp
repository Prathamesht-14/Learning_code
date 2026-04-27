#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int zero=0,one=0;string s;
        cin>>s;
        for(auto it:s){
               if(it=='1')one++;
               else zero++;
        }
        cout<<(n-1)*one+zero<<endl;

        
    }

    return 0;
}