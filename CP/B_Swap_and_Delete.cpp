#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;int one=0,two=0;int n=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')one++;
            else two++;
        }
        if(one==two){cout<<"0"<<endl;}
        else if(one==0||two==0){
                cout<<abs(one-two)<<endl;
        }else{
            for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(two){
                    two--;
                }else{
                    cout<<one<<endl;break;
                }
            }
            else {
                if(one){
                    one--;
                }else{
                    cout<<two<<endl;break;
                }
               }
        }
        }
        
        
    }

    return 0;
}