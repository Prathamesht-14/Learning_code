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
        vector<ll> arr(n);
        inputArray(arr);
        for(int i=1;i<n-1;i++){
            if(arr[i]==-1){
                arr[i]=0;
            }
        }
        if(arr[0]== -1&&arr[n-1]== -1){
            arr[0]=0;arr[n-1]=0;
        }else if(arr[0]== -1){
            arr[0]=arr[n-1];
        }else if(arr[n-1]== -1){
            arr[n-1]=arr[0];
        }
        int sum=0;
        for(int i=1;i<n;i++){
            sum+=(arr[i]-arr[i-1]);
        }
        cout<<abs(sum)<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}