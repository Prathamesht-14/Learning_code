#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string ans;long long n=0;
        for(int i=0;i<s.length();i++){
          int length=ans.length();
            if(!ans.empty()&&ans[length-1]!=s[i]){
                n++;ans.pop_back();
            }else{
            ans+=(s[i]);}
        }
        

        
        if(n&1){
          cout<<"DA"<<endl;
        }else{
          cout<<"NET"<<endl;
        }
        
    }

    return 0;
}