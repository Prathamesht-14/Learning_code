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
        ll mini=1,maxi=n,i=0,j=n-1;
        while(i<j){
            if(arr[i]==mini){
                mini++;i++;
            }else if(arr[i]==maxi){
                maxi--;i++;
            }else if(arr[j]==mini){
                mini++;j--;
            }else if(arr[j]==maxi){
                maxi--;j--;
            }else{
                break;
            }
        }
        if(j-i>1){
            cout<<i+1<<" "<<j+1<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

    return 0;
}