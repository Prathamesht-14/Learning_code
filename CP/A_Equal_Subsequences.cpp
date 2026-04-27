#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        int m=n-k;
        string str="";
        while(k--){
            str+="1";
        }
        while(m--){
            str+="0";
        }
        cout<<str<<endl;

        
    }

    return 0;
}