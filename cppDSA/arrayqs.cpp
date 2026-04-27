#include<iostream>
using namespace std;
// void swapalter(int aray[],int n){
//     for(int i =0;i<n;i=i+2){
//         if (i+1 < n){
//             //swap(aray[i],aray[i+1]);
//             int temp=aray[i];
//             aray[i]=aray[i+1];
//             aray[i+1]=temp;

//         }
//     }
// }
// void printaray(int aray[],int n){
//     for (int i=0;i<n;i++){
//         cout<<aray[i]<<" ";
//     }
// }
int findunique(int aray[],int n){
   int ans =0;
   for(int i=0; i<n ;i++){
    ans=ans^aray[i];
   }
   return ans;
 
}
int main(){
    int odd[5]={1,1,3,3,5};
    int even[4]={1,2,3,4};
    // swapalter(odd,5);
    // printaray(odd,5);
    //  swapalter(even,4);
    // printaray(even,4);
    return 0;
}