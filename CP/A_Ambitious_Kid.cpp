#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    
      int n;
      cin>>n;vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }int mini=INT_MAX;
      for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0-(arr[i]);

        }
        mini=min(mini,arr[i]);
      }  
      cout<<mini<<endl;
    
    return 0;
}