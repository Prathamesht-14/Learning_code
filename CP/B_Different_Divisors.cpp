#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n){
    if(n==2)return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        long long d1=d+1;
        while(!is_prime(d1)){
            d1++;
        }
        long long ans1=d1;
        d1=ans1+d;
        while(!is_prime(d1)){
            d1++;
        }
        long long ans2=d1;
        cout<<ans1*ans2<<endl;
        
    }

    return 0;
}