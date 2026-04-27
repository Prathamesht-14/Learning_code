#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin>>n;
       vector<int>prefix(n),suffix(n);
       for(int i=0;i<n;i++){
        cin>>prefix[i];
       } 
       for(int i=0;i<n;i++){
        cin>>suffix[i];
       } 
       if(prefix[n-1]!=suffix[0]){
        cout<<"NO"<<endl;
        continue;
       }
       bool ans1=true;
       
        for(int i = 1; i < n; i++){
            if((prefix[i-1] % prefix[i] != 0)||(prefix[i-1] <prefix[i] )){
                ans1 = false;
                break;
            }
        }
       for(int i=0;i<n-1;i++){
        if(((suffix[i+1]%suffix[i])!=0)||(suffix[i+1]<suffix[i])){
            ans1=false;
            break;
        }
        
       }
       for (int i = 0; i < n; i++) {
    if (__gcd(prefix[i], suffix[i]) != suffix[0]) ans1 = false;
}

       if(ans1){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}