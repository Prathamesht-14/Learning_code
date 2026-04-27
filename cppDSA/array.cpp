#include<iostream>
using namespace std;
int getmax(int num[], int n){
    int maxi=INT32_MIN;
    for (int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
        // if(num[i]>maxi){
        //     maxi=num[i];
        // }
        
    }
    return maxi;
}
int getmin(int num[],int n){
    int mini=INT32_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
        // if(num[i]<INT32_MAX){
        //     mini=num[i];
        // }
    }
    return mini;
}
int main(){
     int num[100];
     int size;
     cin>>size;
     for(int i=0;i<size;i++){
        cin>>num[i];
     }
    cout<<"max num is";
    cout<<getmax(num,size);
    cout<<"min num is";
    cout<<getmin(num,size);
    return 0;
}