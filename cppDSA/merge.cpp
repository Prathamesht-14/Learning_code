#include<iostream>
#include<vector>
using namespace std;
void merge(vector <int>&arr,int s,int m,int e){
   int left=s;int right=m+1; 
   vector<int> temp;
   while(left<=m&&right<=e){
    if(arr[left]<=arr[right]){
       temp.push_back(arr[left]);left++;
    }
   
    else{
        temp.push_back(arr[right]);right++;
    }
   }
    while(left<=m){
        temp.push_back(arr[left]);left++;
    }
    while(right<=e){
        temp.push_back(arr[right]);right++;
    }
    for (int i=s;i<=e;i++){
        arr[i]=temp[i-s];
    }
   }

void mergesort(vector <int> &arr,int s,int e){
    if(s>=e){ return; }
    int m=(s+e)/2;
    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    merge(arr,s,m,e);
}
int main(){
     vector <int> arr={2,1,9,5,2,3};
     int size=6;
     mergesort(arr,0,5);
     for(auto i:arr){
        cout<<i<<" ";
     }
}