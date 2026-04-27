#include<iostream>
using namespace std;
 //search element in array
//  for(int i=0;i<n;i++){
//     if(array[i]==key){
//         return 1;
//     }
//  }return 0;
// }
void reverse(int array[],int n){
    int end = n-1;
    for(int i=0;i<=end;i++){
        swap(array[i],array[end]);
        end--;
    }
}
void print(int aray[],int n){ 
   for(int i=0;i<n;i++){
    cout<<aray[i]<<endl;
   }
}
int main(){
 int array[10] ={1,2,3,4,5,6,7,8,9,10};  
//    int key;
//    cout<<"enter key";
//    cin>>key;
//    bool found=search(array,10,key);
//    if (found){
//     cout<<"key is present";
//    }
//    else{ 
//    cout<<"key is absent";
//    }
 int aray[3]={1,2,3};
 reverse(array,10);
 reverse(aray,3);
 print(array,10);
 print(aray,3);
 return 0;
}