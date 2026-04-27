#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;int count =0;
        int ans=0;
        for(int i=1;i<=sqrt(n);i++){
            if((n%i)==0){
           count++;
            }else{
                ans=max(ans,count);
                count=0;
            }
        }
        ans=max(ans,count);
        cout<<ans<<endl;
    }
    return 0;
}