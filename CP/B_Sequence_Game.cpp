#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int b;
        cin >> b;
        vector<int> arr(b), c;
        for(int i = 0; i < b; i++){
            cin >> arr[i];
        }

        c.push_back(arr[0]);

        for(int i = 1; i < b; i++){
            if(arr[i-1] > arr[i]){
                c.push_back(arr[i]);
                c.push_back(arr[i]);  // push twice
            } else {
                c.push_back(arr[i]);  // push once
            }
        }

        cout << c.size() << endl;
        for(int x : c){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
