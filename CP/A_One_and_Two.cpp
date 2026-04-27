#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        int  sum=0;
        for(int i=0;i<n;i++){
            if(a[i]==2){
                sum++;
            }
        }
        int leftsum=0;
        int rightsum=sum;bool flag=true;
        for(int i=0;i<n;i++){
            
            if(a[i]==2){leftsum++;
            rightsum--;}if(rightsum==leftsum){
                cout<<i+1<<endl;flag=false;break;
            }
        }
        if(rightsum==leftsum&&flag){
                cout<<n<<endl;flag=false;continue;
        }
        if(flag){cout<<"-1"<<endl;}

    }
    return 0;
}