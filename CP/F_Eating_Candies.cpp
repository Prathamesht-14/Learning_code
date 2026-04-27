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
        vector<ll> arr(n),prefix(n),suffix(n);
       map<int,vector<int>>mpp;
        inputArray(arr);
        prefix[0]=arr[0];
        mpp[prefix[0]].push_back(0);
        suffix[n-1]=arr[n-1];
        for(int i=1;i<n-1;i++){
          prefix[i]=prefix[i-1]+arr[i];
          mpp[prefix[i]].push_back(i);
        }
        mpp[suffix[n-1]].push_back(n-1);
        for(int i=n-2;i>0;i--){
          suffix[i]=suffix[i+1]+arr[i];
          mpp[suffix[i]].push_back(i);
        }int candies=0;
        for(auto it:mpp){
            if(it.second.size()==2){
                int a=it.second[0]+1;
                int b=n-it.second[1];
                if((a+b)<=n){
                    candies=max(candies,a+b);
                }
            }
        }
        cout<<candies<<endl;

        
    }

    return 0;
}