#include<iostream>
#include<limits.h>
using namespace std;
//n=c*i+j; c=no of coloums for array initialisation at least colomn needed
///this valid in function also
// void printaray(int array[][4],int row,int col){
//     for (int i=0;i<row;i++){
//         for(int j=0; j<col;j++){
//             cout<<array[i][j];
//         }
//         cout<<endl;
//     }
// }
// bool findtarget(int array[][4] ,int row,int col,int target){
//     for (int i=0;i<row;i++){
//         for(int j=0; j<col;j++){
//          if(array[i][j]==target){
//             return 1;
//          }
//         }
//     }
//     return 0;
// }
// int findmax(int arr[][4],int row,int col){
//     int maxAns=INT_MIN;
//     for(int i=0;i<row;i++){
//         for (int j=0;j<col;j++){
//          if(arr[i][j]>maxAns){
//             maxAns=arr[i][j];
//          }
//         }
//     }
//     return maxAns;
// }
// int findmin(int arr[][4],int row,int col){
//     int minAns=INT_MAX;
//     for(int i=0;i<row;i++){
//         for (int j=0;j<col;j++){
//          if(arr[i][j]<minAns){
//             minAns=arr[i][j];
//          }
//         }
//     }
//     return minAns;
// }
// void rowisesum(int arr[][4],int row,int col){
//     int sum=0;
//     for (int j=0;j<col;j++){
//         for(int i=0;i<row;i++){
//             sum=sum+arr[i][j];
//         }
//     }
//     cout<<"sum of array is"<<sum;
// }
int main(){
    int aray[5][4];
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    } ;
    //rowisesum(arr,3,4);
    // cout<<"max num is"<<findmax(arr,3,4)<<endl;
    // cout<<"min no is"<<findmin(arr,3,4);
    // int target =11;
    // cout<<"found or not"<<findtarget(arr,3,4,13);
    // int row=3, col=3;
    // printaray(arr,3,4) ;
    // for (int i=0;i<row;i++){
    //     for(int j=0; j<col;j++){
    //         cout<<aray[i][j];
    //     }
    //     cout<<endl;
    // }

    return 0; 

}