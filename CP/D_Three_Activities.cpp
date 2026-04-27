#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<int>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
    }
}
vector<int>max3(vector<int>a){
    vector<pair<int,int>>temp;
    vector<int>ans;
    for(int i=0;i<a.size();i++){
       temp.push_back({a[i],i});
    }

    sort(temp.rbegin(),temp.rend());
    for(int i=0;i<3;i++){
       ans.push_back(temp[i].second);
    }

    return ans;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> a(n),b(n),c(n);
        inputArray(a);
        inputArray(b);
        inputArray(c);
        vector<int>maxa=max3(a);
        vector<int>maxb=max3(b);
        vector<int>maxc=max3(c);
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int x=maxa[i];
                    int y=maxb[j];
                    int z=maxc[k];
                    if(x==y||y==z||x==z)continue;
                     ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
        cout<<ans<<endl;
        
    }

    return 0;
}