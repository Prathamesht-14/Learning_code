
#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;string s;
        cin >> n;
        
        cin >> s;
       string ans="";
        for (char c : s) {
            if (c == '(') {
                ans+=c;
            } else { 
                if(!ans.empty()&&ans.back()=='('){
                    ans.pop_back();
                }else{
                    ans+=c;
                }
            }
        }
        cout << ans.length()/2 << endl;
    }
}