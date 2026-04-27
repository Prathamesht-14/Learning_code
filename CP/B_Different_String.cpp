#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
      string n;
        cin >> n;
        bool flag=false;
        for(int i=1;i<n.length();i++){
            if(n[i]!=n[i-1]){flag=true;
             swap(n[i],n[i-1]);
            }
        }
        if(flag){
            cout<<"YES\n"<<n<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}