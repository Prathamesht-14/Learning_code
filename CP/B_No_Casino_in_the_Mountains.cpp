#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      } int ans=0;int subans=0;
      for(int i=0;i<n;i++){
           if(arr[i]==0){
            subans++;
           }else {
            subans=0;
           }
           if(subans==k){
            ans++;i++;subans=0;
           }
      } 
      cout<<ans<<endl;
    }
    return 0;
}