#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>mpp;
    int A[4]={1,2,2,3};
    for(int i=0;i<4;i++){
        mpp[A[i]]++;
    }
    //it stored in sorted way by sorted key 
    mpp.insert({5,4});
    for(auto it:mpp){
          if(it.second==1){
            //cout<<it.first;
          }
    }
    //to check key is present or not 0 if absent 1 for present
    //cout<<mpp.count(15);
    auto it=mpp.find(5);
   
}