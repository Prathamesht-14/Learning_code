#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        ll n,q;
        cin >> n>>q;
        vector<ll> arr(n),query(q);
        inputArray(arr);
         inputArray(query);
         map<int,int> mpp;
         for(int i=n-1;i>=0;i--){
             mpp[arr[i]]=i+1;
         }
         for(int i=0;i<q;i++){
            
             int temp=mpp[query[i]];
             for(auto &it:mpp){
                 if(it.second<temp){
                     it.second++;
                 }
             }
             mpp[query[i]]=1;
             cout<<temp<<" ";
         }
         cout<<"\n";
        
    

    return 0;
}