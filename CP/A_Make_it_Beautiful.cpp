#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
        sort(arr.rbegin(),arr.rend());bool flag=false;
        for(int i=0;i<n-1;i++){
           if(arr[i]!=arr[i+1]){
             flag=true;
             break;
           }
        }
        if (flag){
            if(arr[0]==arr[1]){
                int i=2;
                while(arr[i]==arr[0]&&i<n){
                    i++;
                }
                swap(arr[0],arr[i]);
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}