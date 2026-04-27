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
        char c;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g'){
          cout<<0<<endl;
          continue;
        }
        string ss=s+s;int start=0;bool flag=false;int ans=0;
        for(int i=0;i<2*n;i++){
            if(flag){
                start++;
            }
            if((ss[i]==c)&&!flag&&start==0){
               flag=true;
            }
            
            if(ss[i]=='g'){
                 ans=max(ans,start);
                 start=0;
                 flag=false;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}