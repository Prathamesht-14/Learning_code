#include<iostream>
using namespace std;
#include<queue>
class customqueue{
int rear,front,size;int *arr;
public:
customqueue(int size){
   rear=-1;front=-1;
   this->size=size;
   arr=new int[size];
}
void push(int val){
    if(front==-1&&rear==-1){
        rear++;front++;
        arr[rear]=val;
    }else if(rear==size-1){
        cout<<"queue overflow";return;
    }else{
        rear++;arr[rear]=val;
    }
}
void pop(){
    if(front==-1&&rear==-1){
        cout<<"queue underflow";return;
    }else if(front==rear){
        arr[front]=-1;
        front=-1;rear=-1;
    }else {
        arr[front]=-1;front++;
    }
}
 bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return 1;
        else
            return 0;
    }
    int getSize()
    {
        // important
        if (front == -1 && rear == -1)
            return 0;
        else
            return (rear - front + 1);
    }
    int getFront()
    {
        if (front == 1)
        {
            cout << "Noe lement in the Queue" << endl;
            return -1;
        }
        else
            return arr[front];
    }
    int getRear()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[rear];
    }
    void print()
    {
        cout << "Printing Queue: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
class cqueue{
    int rear,front,size;int *arr;
public:
cqueue(int size){
   rear=-1;front=-1;
   this->size=size;
   arr=new int[size];
}
void push(int val){
    //overflow
    if((front==0&& rear==size-1 )||(rear==front-1)){//galti
       cout<<"overflow"<<endl; return;
    }//empty case bhulna mat
    else if(front==-1&&rear==-1){
        front++;rear++;
        arr[rear]=val;
    }//circular nature
    else if(rear==size-1&&front!=0){
        rear=0;
        arr[rear]=val;
    }//normal form
    else{
     rear++;
     arr[rear]=val;    }
}
void pop(){
     //underflow
     if(front==-1&&rear==-1) {
        cout<<"empty";return;
     }//single elemrnt
     else if(front==rear){//galti
        arr[front]=-1;
        front=-1;rear=-1;
     }//circular nature
     else if(front==size-1){
        arr[front]=-1;
        front=0;
     }//normal
     else{arr[front]=-1;front++;}
}void print()
    {
        cout << "Printing Queue: " <<"front= "<<front<<" rear= "<<rear<< endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};//doubley ended queue =dequeue can push pop on both sides

int main(){
// queue<int>q;
// q.push(5);q.push(4);
// cout<<q.size()<<endl;  
// cout<<q.front()<<" "<<q.back(); 
    // customqueue q(3);
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.print();
    // q.pop();q.pop();q.pop();
    // q.push(40);
    // q.print();
cqueue q(5);
  q.push(10); q.push(20); q.push(30); q.push(40);q.push(60);q.push(70); q.print();
q.pop();q.print();q.pop();q.print();q.pop();q.print();q.pop();q.print();q.pop();q.print();q.pop();q.print(); 

}