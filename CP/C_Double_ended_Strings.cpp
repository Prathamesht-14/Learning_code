#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin>>a>>b;
        string str1,str2;
        if(a.length()>b.length()){
            str1=a;
            str2=b;
        }else{
            str1=b;
            str2=a;
        }int maxi=0;
        for(int i=0;i<str2.length();i++){
            for(int j=i;j<str2.length();j++){
            string sub = str2.substr(i, j - i + 1);
            if(str1.find(sub)!=string :: npos){
                maxi=max(maxi,j-i+1);
            }
        }
        }
        cout<<a.length()+b.length()-(maxi*2)<<endl;
        
    }

    return 0;
}