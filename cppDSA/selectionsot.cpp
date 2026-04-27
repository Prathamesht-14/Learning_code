#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,4,3,5,2,7};
    for(int i=0;i<5;i++){
        int mini=i;
        for(int j=i+1;j<6;j++){
          if(arr[mini]>arr[j]){
            mini=j;
          }
        }
        swap(arr[i],arr[mini]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}