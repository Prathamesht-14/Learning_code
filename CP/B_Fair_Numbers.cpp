#include <bits/stdc++.h>
using namespace std;
bool isfair(long long n){ 
    long long num =n;
    while(num!=0){
        int x=num%10;
        if(x!=0&&n%x!=0){
            return false;
          
        }
      num/=10;
    }
    return true;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while(!isfair(n))n++;
        cout<<n<<endl;
       
    }

    return 0;
}
