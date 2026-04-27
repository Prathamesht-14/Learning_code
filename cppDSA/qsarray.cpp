#include<iostream>
using namespace std;
void shiftnegside(int arr[],int n){
    int j=0; // to store neg num
    for(int index=0; index<n; index++){
        if(arr[index] < 0){
            swap(arr[index] ,arr[j]);
            j++;
        }
    }
}
int main(){
  // int arr[]={23,-7,2,-10,11,-40,60,0};
  // shiftnegside(arr,8 )  ;
  // for(int i=0;i<8;i++) {
  //   cout<<arr[i]<<" ";
  // }
  class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int  n=nums.size();
        int i=0;
        int j=n-1;
        int index=0;
        while(index<n){
            if(nums[index]<0){
             swap(nums[index], nums[j]);
             j=j-2;
            }
            else if (nums[index]>0)  {
                swap(nums[index],nums[i]);
                index++;
                i=i+2;
            }
            
        } 
        return nums;       
    }
};
    return 0;
}