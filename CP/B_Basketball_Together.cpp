#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
      long long  n,d;
        cin >> n>>d;
        vector<long long> arr(n);
        for (long long i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long long i=0,j=n-1;long long cnt=0;
        while(i<=j){
            if(arr[j]>d){
                j--;cnt++;
            }else {
               long long k=(d/arr[j]);
               if((i+k)<=j){
                cnt++;
                i+=k;j--;
               }else{
                break;
               }
            }
            if(i>=n||j<0)break;
        }
        cout<<cnt<<endl;
        
    

    return 0;
}