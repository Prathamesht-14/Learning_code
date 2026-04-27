#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n,k;cin>>n>>k;
       string s;
       cin>>s;
       vector<int>arr(26,0);
       for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
       }
       for(int i=0;i<26;i++){
        if(arr[i]&1){
            k--;
        }
       }
       if(k<-1){
        cout<<"NO"<<endl;
       }else{
        cout<<"YES"<<endl;
       }
    }
    return 0;
}