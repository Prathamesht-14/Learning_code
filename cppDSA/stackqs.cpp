#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int*arr;int size;int top1;int top2;
    Stack(int size){
        arr=new int[size];
        top1=-1;this->size=size;top2=size;

    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"stack full";
        }else{
            top1++;arr[top1]=data;
        }
    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"stack full";
        }else{
            top2--;arr[top2]=data;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"stack empty";
        }else{
         arr[top1]=0;top1--;
        }
    }void pop2(){
        if(top2==size){
            cout<<"stack empty";
        }else{
            arr[top2]=0;top2++;
        }
    }
    void print(){
        cout<<"top1 is"<<top1<<"  top2 is"<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
   Stack st(5); 
   st.push1(4);
   st.push2(3);st.print();
}
//next greater element in array babbar
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         stack<int>st; int n=nums.size(); vector<int> v(n,-1);
//          for(int i=n-1;i>=0;i--){
//          int curr=nums[i];
//          while(!st.empty() &&st.top()<curr){
//             st.pop();
//          }if(!st.empty()){v[i]=st.top();}st.push(curr);
//         }  return v;  }
    
// };