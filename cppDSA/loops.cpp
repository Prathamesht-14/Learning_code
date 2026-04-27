#include<iostream>
using namespace std;

int main(){
    int a ,sum=0;
    cin>>a;
    int i=0;
    /*int i =2;
    cout<<"enter value of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    if(a>0) {
      cout<<"a is +ve";
    }
    else{
        if (a<0){
            cout<<"a is  negative";
        }
    else{
        cout<<"a is 0";
        }
    }
    while(i<b){
        if(b%=1){
            cout<<"b is not prime";
        }
        else{
            cout<<"b is prime";
            }
        i=i+1;
    }*/
    while(i<=a){
        sum=sum+i;
        i=i+2;
        
    }
    cout<<sum;
     return 0;
}