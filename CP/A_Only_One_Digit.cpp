#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin>>x;
        int n=x;
        int ans=INT_MAX;
        while(n>0){
           ans=min(ans,(n%10));
           n=n/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}