#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;cin>>t;
    while(t--){
      int n ;cin>>n;
      string s;int count=0;int count2=0;
      cin>>s;
      for(int i=0;i<n;i++){
        if(s[i]=='.'){
            count++;
            count2++;
        }
        else{
            count=0;
        }
        if(count==3){
            break;
        }
      }
      if(count==3){
        cout<<"2"<<endl;
      }else{
        cout<<count2<<endl;
      }
    }
    return 0;
}