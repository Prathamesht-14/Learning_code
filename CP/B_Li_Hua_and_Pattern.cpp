#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<vector<ll>>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        for(int j=0;j<a[i].size();j++){
         cin >> a[i][j];
        }
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        vector<vector<ll>> arr(n, vector<ll>(n));
        int count=0;

       
        inputArray(arr);
        for (int i = 0; i < (int)arr.size(); ++i) {
        for(int j=0;j<arr[i].size();j++){
         if(arr[i][j]!=arr[n-i-1][n-j-1]){
            count++;
        }
        }
    }
    count/=2;
    if((k-count)>=0&&((k-count)%2==0 || n&1)){
       cout<<"YES"<<endl;}
       else{
        cout<<"NO"<<endl;
       }

    
}return 0;
}