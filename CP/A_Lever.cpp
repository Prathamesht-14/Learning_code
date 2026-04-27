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
        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        int step1=0,step2=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                step1+=(a[i]-b[i]);
            }else{
                step2+=(b[i]-a[i]);
            }
        }
        cout<<step1+1<<endl;
        // if(step2>=step1){
        //     cout<<step1+1<<endl;
        // }else{
        //    cout<<step1<<endl;
        // }
        

        
    }

    return 0;
}