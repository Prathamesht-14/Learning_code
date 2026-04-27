#include<iostream>
using namespace std;
// void sort(int array[],int n){ 
//     int zerocount =0;
//     int onecount =0 ;

//   for (int i=0;i<n;i++ ){
//     if (array[i]==0){ 
//       zerocount++ ;
//     }
//     else{
//        array[i]==1;
//        onecount++ ; 
//     }
//   }
//   int index=0;
//   while (zerocount--){
//     array[index]=0;
//     index++;
//   }
//   while (onecount--){
//     array[index]=1;
//     index++;
//   }
// }
void shiftaray(int array[],int n){// right shift
    int temp=array[n-1];
    for (int i=n-1; i>=1 ; i--){
      array[i]=array[i-1]  ;
    }
    array[0]=temp;
}
int main(){
    // int array[]={0,1,1,1,0,0,1,0,0,1};
    // int arr[3]={10,20,30};
    // for (int i=0; i<3 ;i++) {
    //     for (int j=0;j<3;j++){
    //         cout<<arr[i]<<","<<arr[j]<<endl;
    //     }
    // }
    //sort(array,10);
    int array[]={10,20,30,40,50,60};
    shiftaray(array,6);
    for (int i=0;i<6 ; i++){
        cout<<array[i]<<endl;
    }
    return 0;
}  