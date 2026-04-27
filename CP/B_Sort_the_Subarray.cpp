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
        vector<ll> arr1(n),arr2(n);
        inputArray(arr1);
        inputArray(arr2);ll start=0, end=n-1;
        
        while(start<n&&arr1[start]==arr2[start])start++;
        while(end>=0&&arr1[end]==arr2[end])end--;
        while(start>0){
            if(arr2[start]>=arr2[start-1]){
                start--;
            }else {
                break;
            }
        }
        while(end<n-1){
            if(arr2[end]<=arr2[end+1]){
               end++;
            }else {
                break;
            }
        }

        cout<<start+1<<" "<<end+1<<endl;     
    }

    return 0;
}