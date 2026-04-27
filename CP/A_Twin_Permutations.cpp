 #include<iostream>
 #include<vector>
 using namespace std;
 
 int main(){
     int t;
     cin >> t;
     while(t--){
         int n;cin>>n;vector<int >arr(n),a(n);
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         int maxi=0;
         for(int i=0;i<n;i++){
             maxi=max(maxi,arr[i]);
         }

         maxi++;
         for(int i=0;i<n;i++){
            a[i]=maxi-arr[i];
         }
         for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
         }
         cout<<endl;
     }
     return 0;
 }