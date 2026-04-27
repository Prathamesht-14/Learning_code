#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,k;cin>>n>>k;bool flag=false;vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
         
      }
      for(int i=0;i<n;i++){
        
         if(arr[i]==k){
            flag=true;
            break;
         }
      }  
      if(flag){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}