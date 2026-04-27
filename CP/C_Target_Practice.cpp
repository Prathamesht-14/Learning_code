#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        char arr[10][10];
        int sum = 0;
        string line;

        // 1) Read exactly 10 rows of 10 chars each
        for(int i = 0; i < 10; i++){
            cin >> line;  // safe: reads one 10-char row
            for(int j = 0; j < 10; j++){
                arr[i][j] = line[j];
            }
        }

        // 2) Score each 'X' by its ring
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(arr[i][j] != 'X') continue;
                if (i == 0 || i == 9 || j == 0 || j == 9) {
                    sum += 1;
                } else if ((i == 1 || i == 8) && j >= 1 && j <= 8) {
                    sum += 2;
                } else if ((i == 2 || i == 7) && j >= 2 && j <= 7) {
                    sum += 3;
                } else if ((i == 3 || i == 6) && j >= 3 && j <= 6) {
                    sum += 4;
                } else { // i in {4,5} and j in [4,5]
                    sum += 5;
                }
            }
        }

        cout << sum << "\n";
    }
    return 0;
}
