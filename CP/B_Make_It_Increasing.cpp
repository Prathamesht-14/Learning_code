#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        vector<int>arr(n);bool flag=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-2;i>=0;i--){
            while((arr[i]!=0)&&(arr[i]>=arr[i+1])){
                 arr[i]=arr[i]/2;
                 ans++;
            }
            if(arr[i+1]==0){
                cout<<"-1"<<endl;flag=false;
                break;
            }
        }

        if(flag){
            cout<<ans<<endl;
        }
    }
    return 0;
}