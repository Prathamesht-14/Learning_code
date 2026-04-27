#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int row=1;
    /*int i=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
        cout<<"*";
        j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }*/
    /*int i=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
        cout<<i;
        j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }*/
   /*int i=1;
   int count=1;
   while(i<=n){
     int j=1;
     while(j<=n){
        cout<<count<<" ";
        count=count +1 ;
        j=j+1;
     }
    i=i+1;
   }*/
   /*while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count;
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/
    while(row<=n){
     int col=1;
     int val=row;
     while(col<=row){
        cout<<val ;
        val=val+1;
        col=col+1;
     }
     cout<<endl;
     row=row+1;
    }
    return 0;
}