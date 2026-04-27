#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;cin>>n;vector<int>arr(n),a,b;bool flag=false;
       for(int i=0;i<n;i++){
          cin>>arr[i];
       } 
       int mx=*max_element(arr.begin(),arr.end());
       for(int i=0;i<n;i++){
        if(arr[i]==mx){
            b.push_back(arr[i]);
        }else{
            a.push_back(arr[i]);
        }
       }
       if(a.size()==0){
         cout<<"-1"<<endl;
       }else{
        cout<<a.size()<<" "<<b.size()<<endl;
        for(auto it:a){
              cout<<it<<" ";
        }cout<<endl;
        for(auto it:b){
              cout<<it<<" ";
        }cout<<endl;
       }
    }
    return 0;
}