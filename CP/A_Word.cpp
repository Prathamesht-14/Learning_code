#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int ln=(s.length())/2;
    int uppr=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i]))uppr++;
    }
    string ans="";
    if(uppr>ln){
       for(int i=0;i<s.length();i++){
        ans+=(toupper(s[i]));
       }
    } else{
        for(int i=0;i<s.length();i++){
        ans+=(tolower(s[i]));
    }
    }
    cout<<ans<<endl;
    return 0;
}