#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,r,b;
        cin >> n>>r>>b;string s="";
      while (r > 0 || b > 0) {
    int steps = (int)ceil((double)r / (b + 1)); 
    int mini = min(r, steps);

    if (mini) s.append(mini, 'R');
    if (b) s += 'B';

    r -= mini;
    b--;
}

        cout<<s<<endl;
        
    }

    return 0;
}