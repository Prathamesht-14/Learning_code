#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);unordered_map<int,int>mpp;
        int k=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
            k=max(k,mpp[arr[i]]);
        }
        if(k==n){
            cout<<0<<endl;continue;
        }
         int operations=0;
        while(k<n){
           int subk=min(k,(n-k));
           k+=subk;
           operations+=(subk+1);
         
        }
        cout<<operations<<endl;

    }
    return 0;
}