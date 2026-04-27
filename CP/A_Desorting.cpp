#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;bool flag=true;
        cin>>n;vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }int ans=INT_MAX;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                cout<<"0"<<endl;flag=false;
                
                break;
            }
        }
         if(flag){for(int i=1;i<n;i++){
           ans=min(ans, (arr[i]-arr[i-1]));
        }
        cout<<(ans/2)+1<<endl;}


    }
    return 0;
}