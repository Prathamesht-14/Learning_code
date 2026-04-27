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
        string s;
        cin >> s;
        int n = (int)s.size();
        set<char>st;
        int k;
        for ( k=0;k<n;k++){
            if(st.find(s[k])==st.end()){
                st.insert(s[k]);
           
            }else{
                break;
            }
    
    }
    int i;
    for( i=k;i<n;i++){
        if(s[i]!=s[i-k]){
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"YES"<<endl;
    }
}
    return 0;
}