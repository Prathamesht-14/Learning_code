#include<iostream>
#include<deque>
using namespace std;
class deque{
    int rear,front,size;int *arr;
public:
deque(int size){
   rear=-1;front=-1;
   this->size=size;
   arr=new int[size];
}
void pushfront(int val){
    if(front==-1&& rear==-1){
        front++;rear++;arr[front]=val;
    }else if((front==0&&rear==size-1)||(rear==front-1)){
        cout<<"overflow";return;
    }else if(front ==0&&rear!=size-1){
        front=size-1;arr[front]=-1;
    }else{
        front--;arr[front]=val;
    }
}
    void pushBack(int val)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
        {
            cout << "OverFlow" << endl;
            return;
        }
        // first Ele
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular Nature
        else if (rear == size - 1 & front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        // normal pushing
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
  void popFront()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Queue underFlow" << endl;
            return;
        }
        else if (front == size - 1)
        {
            // single element
            arr[front] = -1;
            front = 0;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popback(){
       if (rear == -1 && front == -1)
        {
            cout << "Queue underFlow" << endl;
            return;
        } 
    else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
       else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        // normal Flow
        else
        {
            arr[rear] = -1;
            rear--;
        }

}};
int main(){
   //deque<int>dq;
    // dq.push_back(10);
    // dq.push_front(20);dq.push_back(30);dq.push_front(40);
    // dq.pop_back();dq.pop_front();
    // cout<<dq.front()<<" "<<dq.back();

}