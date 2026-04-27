#include<iostream>
using namespace std;
void update(int aray[],int n){
    cout<<"in function";
    aray[1]=10;
    for(int i=0;i<n;i++){
    cout<<aray[i]<<endl;
    }
}
int main(){
    int aray[3]={4,5,6};
     update(aray,3);
    for(int i=0;i<3;i++){
    cout<<aray[i]<<endl;
    }
   
    return 0;
}