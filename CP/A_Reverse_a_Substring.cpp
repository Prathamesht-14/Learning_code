#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
   
       string s;
       cin>>s;
       map<char,int>mpp;
       bool flag =true;
        for (int i = 0; i < n; ++i) {
             if (!mpp.count(s[i])) {
            mpp[s[i]] = i; 
        }
            if(!flag)break;
            for(auto & it:mpp){
                if(it.first>s[i]){
                    cout<<"YES"<<endl;
                    cout<<it.second+1<<" "<<i+1<<endl;
                    flag =false;
                    break;
                }
            }
        }
        if (flag){cout<<"NO"<<endl;}
        
   

    return 0;
}