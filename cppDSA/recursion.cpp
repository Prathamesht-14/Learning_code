#include<iostream>
#include<vector>
using namespace std;

// int factorial(int n){
//     if(n==1 ||n==0){return 1;}
//     int ans=n*factorial(n-1);
//     return ans;
// }
// void count(int n){
//     if(n==1){cout<<1;return;
//    ;}
//     cout<<n<<endl;
//     count(n-1);
// }
// bool sarch(int arr[] , int size,int target,int index){
//     if(index>=size ){return false;}
//     if(arr[index]==target){return true;}
//     return sarch( arr, size, target,index+1);
// }
// void doubl(int arr[],int index,int size){
//    if(index>=size){return;}
//    arr[index]=2*arr[index];
//    doubl(arr,index+1,size);

// }
// void even(int arr[], int size ,int index, vector<int> &ans){
//   if(index>=size){return;}
//    if(arr[index]%2==0){ans.push_back(arr[index]);}
//    even(arr,size,index+1,ans);

// }
// void digits(int num){
//   if(num<=0){return;}
//   digits(num/10);
//   cout<<num%10<<" ";
//   }
// int binary(int arr[],int target,int s,int e){
//   if(s>e){return -1;}
//   int mid=s+(e-s)/2;
//   if(arr[mid]==target){return mid;}
//   if(arr[mid]<target){binary(arr,target,mid+1,e);}
//   else{binary(arr,target,s,mid-1);}
// }
void subsequence(string str,string ans,int index){
  if(index>=str.length()){
    cout<<" "<<ans<<endl;
    return;
  }
  char ch=str[index];
  subsequence(str,ans,index+1);
  ans.push_back(ch);
   subsequence(str,ans,index+1);
  
}
int main(){
  //cout<<"factorial of n is "<<factorial(5);
  //count(4);
  // vector<int> ans;
   int arr[]={4,2,6,7,5}; 
   //cout<<binary(arr,9,0,4);
  string str="abcd";string ans="";
  subsequence(str,ans,0);
  // even(arr,5,0,ans);
  // doubl(arr,0,5);
  // for(int nums:arr){
  //   cout<<nums<<endl;
  // }
  //digits(234);
//   int a=7987;
//   string b=to_string(a);
//   cout<<b;
//   cout<<min(b[1],b[2]);
 }