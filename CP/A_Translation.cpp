#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
      string s,t;
       getline(cin,s);
       getline(cin,t); 
      int n=t.length();
        bool flag=true;
        if(s.length()!=t.length()){
            cout<<"NO\n";
            return 0;
        }
        reverse(s.begin(),s.end());
        if(s==t){cout<<"YES\n";}
        else{cout<<"NO\n";}
        // for(int i=0;i<n;i++){
        //     if(s[i]!=t[n-1-i]){
        //        flag=false;break;
        //     }
        // }

        // if(flag){
        //     cout<<"YES\n";
        // }else{
        //     cout<<"NO\n";
        // }
    
        
  

    return 0;
}