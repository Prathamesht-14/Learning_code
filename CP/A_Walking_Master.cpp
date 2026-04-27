#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int a,b,c,d;
       cin>>a>>b>>c>>d;
        int ans=d-b;
        
        if(d<b){
            cout<<"-1"<<endl;continue;
        }
        a+=ans;
        if(a<c){
            cout<<"-1"<<endl;continue;
        }
        ans+=(a-c);
        cout<<ans<<endl;
    }
    return 0;
}