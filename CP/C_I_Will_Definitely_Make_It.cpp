#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
       vector<vector<long long>> casinos(n, vector<long long>(3));

        for (int i = 0; i < n; ++i) {
            cin >> casinos[i][0] >> casinos[i][1] >> casinos[i][2];
        }
         for (int i = 0; i < n; ++i) {
            cout<< casinos[i][0] <<  casinos[i][1]<<  casinos[i][2]<<endl;
        }

    }
    return 0;
}