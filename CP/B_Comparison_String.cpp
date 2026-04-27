#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int ans=1;int count=1;
        
        for (int i = 0; i < n-1; i++) {
            if(s[i]==s[i+1]){
                count++;
            }else{
                ans=max(ans,count);
                count=1;
            }
        }
     ans=max(ans,count);
        cout << ans+1 << "\n";
    }
    return 0;
}
