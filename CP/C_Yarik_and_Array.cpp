#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int sum=0;
        
            sum+=a[0];
       int maxi=INT_MIN;
        int maxi1=*max_element(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(sum<0)sum=0;
           if(((a[i]&1)!=(a[i-1]&1))){
            sum+=a[i];
           }else{
            maxi=max(sum,maxi);
            sum=a[i];

           }
           maxi=max(maxi,sum);

        }
         if(maxi1<0)cout<<maxi1<<endl;
        else cout<<max(maxi1,maxi)<<endl;
        
    }

    return 0;
}