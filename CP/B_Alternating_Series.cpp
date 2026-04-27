#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
       for(int j=0;j<n;j++){
        if(j==n-1&&((j&1))){
            cout<<2<<" ";
        }else if(!(1&j)){
            cout<<-1<<" ";
        }else{
            cout<<3<<" ";
        }
       }cout<<endl;
        
    }

    return 0;
}