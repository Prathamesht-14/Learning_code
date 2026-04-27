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

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n),ans;
        inputArray(arr);
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        ans.push_back(arr[0]);
        ans.push_back(arr[1]);
        for(int i=2;i<n;i++){
            int curr=ans.size();
            int y=arr[i]-ans[curr-1];
            int x=ans[curr-1]-ans[curr-2];
           
            if(x>0){
                if(y>0){
                    ans[curr-1]=arr[i];
                }else if(y<0){
                    ans.push_back(arr[i]);
                }
            }else {
                if(y<0){
                    ans[curr-1]=arr[i];
                }else if(y>0){
                    ans.push_back(arr[i]);
                }
        }
        
        
    }
    int sizeans=ans.size();
        if(ans[0]==ans[1]){
            sizeans--;
        }   
        cout<<sizeans<<"\n";

   
} return 0;
}