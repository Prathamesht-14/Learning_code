#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
     int n,q;
     cin>>n>>q;
     
     vector<int>a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int oldsum=0;
     for(int i=0;i<n;i++){
        oldsum+=a[i];
     }
     vector<int>presum(n+1,0);
     for(int i=1;i<=n;i++){
        presum[i]=presum[i-1]+a[i-1];
     }
     while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int addsum=(r-l+1)*k;
        int subsum=presum[r]-presum[l-1];
        int newsum=oldsum-subsum+addsum;
         
       
        if(newsum&1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

     } 
    }
    return 0;
}