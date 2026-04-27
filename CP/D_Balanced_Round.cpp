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
      }  
      sort(arr.begin(),arr.end());int counter=1;int maxlen=1;
     for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1])<=k){
            counter++;
        }else{
            counter=1;
        }
        maxlen=max(counter,maxlen);
     }
     cout<<n-maxlen<<endl;

    }
    return 0;
}