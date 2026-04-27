#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int a,b,x,y;
      cin>>a>>b>>x>>y;  
    
    if(a>b){
        if(a-b==1&&a&1){cout<<y<<endl;}
        else{
            cout<<-1<<endl;
        }
    
    }else{
       if(x<=y){
        cout<<x*(b-a)<<endl;
       }else{
        int ans=0;
        if(!(a&1)){
            for(int i=0;i<(b-a);i++){
                if(!(i&1)){
                    ans+=y;
                }
                else{ans+=x;}
            }
        }else{
            for(int i=0;i<(b-a);i++){
                if((i&1)){
                    ans+=y;
                }
                else{ans+=x;}
            }
        }
        cout<<ans<<endl;
       }
    }
    
  
}
  return 0;
}