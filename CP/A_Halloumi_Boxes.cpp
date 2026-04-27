#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>arr,int n){
    bool flag=true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            flag=false;
        }
      } 
      return flag; 
}
int main(){
      int t;cin>>t;
      while(t--){
        int n,x;
        cin>>n>>x;vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
        }
        if(x>1){
          cout<<"YES"<<endl;
        }else if(x==1&&check(arr,n)){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
        

      }
    return 0;
}