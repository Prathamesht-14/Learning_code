#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;cin>>n;
      vector<int> arr(n); int length=0;int ans=0;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        if(arr[i]==0){
            length++;
        }else{
           ans=max(ans,length);
           length=0;
        }
        
      } ans=max(ans,length);cout<<ans<<endl;
    }
    return 0;
}