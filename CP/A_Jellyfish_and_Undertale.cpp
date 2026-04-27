#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        //sort(arr.begin(), arr.end());  
        int j = 0;
        long long ans = 0;
        int timer = b;

        while(timer > 0){
            if(j < n){
                ans += timer - 1;      // jump ahead by timer-1 seconds
                timer = min(a, 1 + arr[j]);  // timer would have gone down to 1, then add boost
                j++;
            } else {
                ans += timer;  // no boosts left, just add remaining timer
                timer = 0;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
