#include <bits/stdc++.h>
using namespace std;
long long  isPowerOfTwo(long long  n) {
        if (n <= 0) return -1; 
       long long count=0; 
        if (n == 1) return count;
        while (n > 1) {
            if ((n & 1) ) {return -1;}
            count++;

            n /= 2;
        }
        return count;
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       long long  a,b;
        cin >> a>>b;long long ans=-1;
        if(a>b){
          ans=a/b;
          if(a%b!=0){
            cout<<-1<<endl;
            continue;
          }
        }else{
            ans=b/a;
          if(b%a!=0){
            cout<<-1<<endl;
            continue;
          }
        }
        long long answer=isPowerOfTwo(ans);
        if(answer==-1){
            cout<<-1<<endl;
            continue;
        }
        int eight=answer/3;
        if(answer%3!=0)eight++;
        cout<<eight<<endl;
        
        
    }

    return 0;
}