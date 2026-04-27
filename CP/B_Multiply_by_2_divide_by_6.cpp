#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       long long n;
        cin >> n;int ans=0;
        if(n==1){
            cout<<0<<endl;continue;
        }
        while(n%6==0&&n!=1){
            n/=6;ans+=1;
        }
        while(n%3==0&&n!=1){
            n/=3;ans+=2;
        }
        if(n==1){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }

        
    }

    return 0;
}