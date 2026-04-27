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
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }int negative=0;long long mini=LONG_MAX,sum=0;;
        for (int i = 0; i < n; ++i) {
            if(a[i]<0)negative++;
            mini=min(abs(a[i]),mini);
            sum+=abs(a[i]);
        }
        if(negative&1){
            cout<<sum-(2*mini)<<endl;
        }else{
            cout<<sum<<endl;
        }
        

        
    }

    return 0;
}