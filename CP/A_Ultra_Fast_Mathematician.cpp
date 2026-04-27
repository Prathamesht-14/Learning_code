#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        string  m,n;
        cin >>m>> n;
        string ans="";
        for(int i=0;i<m.length();i++){
            if(m[i]!=n[i]){
                ans+=("1");
            }else{
                ans+=("0");
            }
        }
        cout<< ans<<endl;
        
   

    return 0;
}