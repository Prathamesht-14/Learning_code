#include<iostream>
using namespace std;
// int binarysearch(int arr[],int n,int target){
//  int start=0;
//  int end=n-1;
//  int mid=(start+end)/2;
//  while(start<=end){
//     if(arr[mid]==target){
//         return mid;
//     }
    // else if(target<arr[mid]){
    //     end=mid-1;
    // }
    // else if(target>arr[mid]){
    //     start=mid+1;
    // }
//     mid=(start+end)/2;
//  }
//  return -1;
// }
// int duplicateindex(int arr[],int n,int target){
//    int start=0;
//    int end=n-1;
//    int ans=-1;
//    int mid=(start+end)/2;
//    while(start<=end){
    
//     if(arr[mid]==target){
//         ans=mid;
//         end=mid-1;
//     }
//     else if(target<arr[mid]){
//         end=mid-1;
//     }
//     else if(target>arr[mid]){
//         start=mid+1;
//     }
//     mid=(start+end)/2;

//    } 
//    return ans; 
// } 
int main(){
    int arr[]={10,20,30,40,40,60,70,80,90};
    // int target=90;
    int n=9;
    // cout<<duplicateindex(arr,9,10);
    // int ansindex=binarysearch(arr, n,70);
    // if(ansindex==-1){
    //     cout<<"element is not found"<<endl;
    // }
    // else{
    //     cout<<"element found";
    // }

    return 0;
}