#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n;
        cin >> n;
       n--;
        long long msb=log2(n);
        long long num=pow(2,msb)-1;
        while(num>=0){
            cout<<num<<" ";
            num--;
        }
        num=pow(2,msb);
        while(num<=n){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
        
        
    }

    return 0;
}