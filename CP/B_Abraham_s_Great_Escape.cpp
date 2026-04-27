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
        ll n,k;
        cin >> n>>k;
        if(k==n*n-1){
            cout<<"NO"<<endl;
            continue;
        }
        ll K=k;
       vector<vector<char>> arr(n,vector<char>(n));
         for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){

                if(k>0){
                    arr[i][j]='U';
                     k--;
                }else if(i==n-1){
                    arr[i][j]='R';
                }else{
                    arr[i][j]='D';
                }
               
              }
         }
         if(K!=n*n){arr[n-1][n-1]='L';}
         cout<<"YES"<<endl;
         for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                cout<<arr[i][j];
              }
              cout<<endl;
        
         }
    }
    return 0;
}