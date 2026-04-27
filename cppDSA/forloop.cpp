#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /*int a=0;
    int b=1;
    cout<<a<< b;
    for (int i=1; i<=n;i++){
      int nextnum=a+b;
      cout<<nextnum<<endl;
      a=b;
      b=nextnum;

    }*/
    bool isprime=1;
    for (int i=2; i<n;i++){
       if(n%i==0){
        isprime=0;
        break;

       }
    }
    if (isprime==0){
        cout<<"not prime number"<<endl;
    }
    else
    {
        cout<<"isa prime number";
    }
    for(int i=0;i<5 ;i++  )
    return 0;

}