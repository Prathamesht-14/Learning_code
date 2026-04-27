#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n,k;
        cin >> n>>k;
        string w;
        cin>>w;
        int h=0;
        int j=k;int white=0;
        for(int i=0;i<k;i++){
        if(w[i]=='W'){white++;}
        }int ans=white;
        while(j<n){
            if(w[j]=='W')white++;
            if(w[h]=='W')white--;
            h++;j++;
            ans=min(white,ans);
        }
        cout<<ans<<endl;
        
    }

    return 0;
}