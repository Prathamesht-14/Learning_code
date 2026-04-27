#include<iostream>
#include<stack>>
using namespace std;
class Stack{
 public:
 int * arr;
 int size, top;
 Stack(int size){
    arr=new int[size];
    this->size=size;
    
    this->top=-1;
 }
 void push(int data){
    if(top==size-1){
        cout<<"stack is full"<<endl;return;
    }
    else{
       top++;
       arr[top]=data; 
    }
 }
 void pop(){
    if(top==-1){
       cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"deleted element is"<<arr[top]<<endl;
        top--;
    }
 }
 bool isempty(){
    if(top==-1){
        return true;
    }return false;
 }
 void gettop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"top element is"<<arr[top]<<endl;
    }
 }
 void getsize(){
    cout<<"size of stack is"<<top<<endl;
 }
 void print(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }else{
        while(top!=-1){
         cout<<arr[top]<<" "<<endl;
         top--;
        }cout<<endl;
    }
 }
};
int main(){
    // string s="prathamesh";
    //  stack<char>str;
    //  for(int i=0;i<s.size();i++){
    //     str.push(s[i]);
    //  }
    //  while(!str.empty()){
    //     cout<<str.top();
    //     str.pop();
    //  }
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.pop();
    // cout<<"size of stack is "<<st.size()<<endl;
    // cout<<st.empty();  
    //Stack st(4);
    //st.print();
    // st.getsize();
    // st.gettop();
    // st.pop();
    // st.print();
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(10);
    // st.print();
    // st.getsize();
    // st.gettop();
    // st.pop();
    // st.print();


}
