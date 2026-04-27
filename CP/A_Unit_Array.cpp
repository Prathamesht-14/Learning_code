#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;int plus=0;int minus=0;vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                plus++;
            }else{
                minus++;
            }
        }
        if(plus>=minus&&!(minus&1)){
            cout<<"0"<<endl;
        }else{
            int i=0;
            while(minus>plus){
                 minus--;i++;plus++;
            }
            if(minus&1){
                minus--;plus++;i++;
            }
            cout<<i<<endl;
        }
    }
    return 0;
}