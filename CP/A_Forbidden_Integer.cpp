#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,k,x;
      cin>>n>>k>>x; 
      if(x==1&&k==1){
        cout<<"NO"<<endl;continue;
      } 
      if(x!=1){
        cout<<"YES"<<endl<<n<<endl;
        for(int i=0;i<n;i++){
          cout<<"1 ";
        }
        cout<<endl;
      }else {
        if(k==2&& n&1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            if(n&1){
                cout<<(n-3)/2+1<<endl;
                for(int i=0;i<(n-3)/2;i++){
                    cout<<"2 ";
                }
                cout<<"3 "<<endl;
            }else{
             cout<<n/2<<endl;
                for(int i=0;i<(n)/2;i++){
                    cout<<"2 ";
                }
                cout<<endl;   
            }
        }
      }
      
    }
    return 0;
}