#include<iostream>
#include<vector>
using namespace std;

int main(){
      int t;cin>>t;
      while(t--){
        int n,x;
        cin>>n>>x;vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
        }
        int maxi=arr[0];
        for (int i = 0; i < n-1; i++)
        {
          maxi=max(maxi,arr[i+1]-arr[i]);

        }
        int maxi2=2*(x-arr[n-1]);
        cout<<max(maxi,maxi2)<<endl;
        

      }
    
}