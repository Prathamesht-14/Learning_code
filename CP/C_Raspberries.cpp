#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int mini=k;int count2=0,count3=0;
        for(int i=0;i<n;i++){
            if(a[i]&1)count2++;
            else count3++;
            if(a[i]%k==0){mini=0;break;}
            else{
                int count=k-(a[i]%k);
                mini=min(count,mini);}
        }
        if(k==4){
          if(count3>1)mini=min(mini,0);
          if(count3==1&&count2>0)mini=min(1,mini);
          if(count3==0&&count2>1)mini=min(2,mini);
        }
        cout<<mini<<endl;
        
    }

    return 0;
}