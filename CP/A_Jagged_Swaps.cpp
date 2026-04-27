#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check(vector<int>arr,int n){
    bool flag=true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            flag=false;
        }
      } 
      return flag; 
}
bool canBeSorted(vector<int> arr, int n) {
    bool changed;
    do {
        changed = false;
        for(int i = 1; i < n - 1; i++) {
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                changed = true;
            }
        }
    } while(changed);
    return check(arr, n);
}

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }  
      
      if(canBeSorted(arr,n)){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}