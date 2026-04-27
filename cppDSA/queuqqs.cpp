#include<iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;
//reverse queue
void reverseq(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        st.push(element);
    }
    while(!st.empty()){
        int elements=st.top();
        st.pop();
        q.push(elements);
    }
}
void reverseqrec(queue<int>&q){
    if(q.empty()){return;}
    int top=q.front();
    q.pop();
    reverseq(q);
    q.push(top);

}
//reverse key elements from stack
 void reversekel(queue<int>&q,int k){
    stack<int>st;int n=q.size();int kq=k;
    if (k > n || k == 0)
        return;
    while(kq){
        kq--;
        st.push(q.front());
        q.pop();
    };
    while(!st.empty()){
        q.push(st.top());st.pop();
    }
    for(int i=0;i<(n-k);i++){
        q.push(q.front());q.pop();
    }

 }
 void interleavequeue(queue<int>&q){
 int n=q.size();if(n==0){return;}queue<int>q2;int k=n/2;int count=0;
while(!q.empty()){
    int top=q.front();
    q.pop();
    q2.push(top);
    count++;
    if(k==count){break;}
}
    while(!q.empty()&&!q2.empty()){
       int first=q2.front();
       q2.pop() ;q.push(first);
       int second=q.front();
       q.pop();q.push(second);

    }
    if(n&1){
        int elem=q.front();
        q.pop();
        q.push(elem);
    }

 }
 //find first -ve element in K window
void solve(int arr[],int n,int k){
deque<int>q;
for (int i = 0; i < k; i++)
{
    if(arr[i]<0){
        q.push_back(i);
    }
}
for(int i=k;i<n;i++){
    if(!q.empty()){
        cout<<arr[q.front()]<<" ";
    }else {
        cout<<"0 ";
    }
    while(!q.empty()&&(i-q.front()>=k)){
        q.pop_front();
    }
    if(arr[i]<0){
        q.push_back(i);
    }
}
if(!q.empty()){
        cout<<arr[q.front()]<<" ";
    }else {
        cout<<"0 ";
    }

}
int main(){
queue<int>q;
q.push(10);q.push(20);q.push(30);q.push(40);q.push(50);q.push(60);q.push(70);q.push(80);q.push(90);
//reverseq(q);
//reverseqrec(q);
//interleavequeue(q);
reversekel(q,2);
int arr[7]={1,-1,-2,-4,5,6,-4};
solve(arr,7,2);
while(!q.empty()){
        int element=q.front();cout<<element<<endl;
        q.pop();
       
    }
}