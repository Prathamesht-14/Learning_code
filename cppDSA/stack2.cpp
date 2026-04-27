#include <iostream>
#include<stack>
using namespace std;
void insertbottom(stack<int>&st,int element){
  if(st.empty()){
    st.push(element);
    return;
  }
  int temp=st.top();
  st.pop();
  insertbottom(st,element);
  st.push(temp);
}
void solve(stack<int> &st,int pos,int &ans){
 if(pos==1){
  ans=st.top();
  return ;
 }
 pos--;
 int temp=st.top();
 solve(st,pos,ans);
 st.push(temp);
}
int getmiddle(stack<int>& st){
  int size=st.size();
  if(size==0){
    cout<<"stack is empty";
  }else{
  int pos = 0;
    if(size & 1) {
      pos = size/2 + 1;
    }
    else {
      //even
      pos = size/2;
    
  }int ans=-1;
    solve(st,pos,ans);return ans;
}
}
void reversest(stack<int>&st){
  if(st.empty()){
    return;
  }int temp=st.top();
  st.pop();
  reversest(st);
  insertbottom(st,temp);
}
void addsortarr(stack<int>&st,int elemrnt){
  if(st.empty()||elemrnt>st.top()){
st.push(elemrnt);return;
  }int temp=st.top();st.pop();
  addsortarr(st,elemrnt);
  st.push(temp);
}
void sortst(stack<int>&st){
  if(st.empty()){return;}
  int temp=st.top();
  st.pop();
  sortst(st);
  addsortarr(st,temp);
}
int main(){
  // string str="prathamesh";
  // stack<char> st;
  // for(int i=0;i<str.length();i++){
  //   char ch=str[i];
  //   st.push(ch);
  // }//if we add string in stack and then remove it from it we got reversed string
  // while(!st.empty()){
  //   cout<<st.top()<<"*";
  //   st.pop();
  // }
  stack<int>str1;
 str1.push(1);str1.push(12);str1.push(13);str1.push(14);str1.push(4);
 //insertbottom(str1,5);reversest(str1);
 addsortarr(str1,12);
sortst(str1);
 while(!str1.empty()){
    cout<<str1.top()<<" ";
    str1.pop();
 }
  //int ans=getmiddle(str1);
//cout<<ans;

}
