#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       string s ,t;
       cin>>s>>t;int j=0;int sub=0;
      int n=s.size();
      int m=t.size();
      vector<int>mpp(26,0);
      for(int i=0;i<m;i++){
        mpp[t[i]-'A']++;
      }
      for(int i=n-1;i>=0;i--){
        if( mpp[s[i]-'A']>0){
            mpp[s[i]-'A']--;
        }
        else{
            s[i]='.';
        }
      }
      string ans="";
      for(int i=0;i<n;i++){
         if(s[i]!='.'){
            ans+=s[i];
         }
      }
      if(t==ans){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }

    }
    return 0;
}