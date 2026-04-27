#include<iostream>
using namespace std;
class Node{
     public:
     int data;
     Node* prev;
     Node* next;
     Node(){
        this->prev=NULL;
        this->next=NULL;
     }
      Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
     }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<endl;
    }
int findlength(Node* head){
    Node* temp=head;
    int  len=0;
    while(temp!=NULL){
        len++;temp=temp->next;
    }return len;
}
void insertathead(Node* &head,Node* &tail,int data){
    if(head==NULL){
      Node* newNode=new Node(data);
      head=newNode;
      tail=newNode;
    }else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        //or head=head->prev;
    }
}
void insertatTail(Node* &head,Node* &tail,int data){
   if(head==NULL){
    Node* newNode=new Node(data);
    head=newNode;
    tail=newNode;
   }else{
    Node* newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
   }
}
void insertatposition(Node* &head,Node* &tail,int data,int position){
    int len=findlength(head);
    if(head==NULL){ 
    Node* newNode=new Node(data);
    head=newNode;
    tail=newNode;
   }else if(position>len){
       insertatTail(head,tail,data);
   }else if(position<=1){
    insertathead(head,tail,data);
   }else{
    Node* newNode=new Node(data);
    Node* prevnode=NULL;
    Node* currnode=head;
    while(position!=1){
       position--;
       prevnode=currnode;
       currnode=currnode->next;
    }
    newNode->prev=prevnode;
    prevnode->next=newNode;
    newNode->next=currnode;
    currnode->prev=newNode;
   }
}
void deletenode(Node* &head,Node* &tail,int positionn){
    if(head==NULL){
        cout<<"linked list is empty";
        return;
    }int len=findlength(head);
    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    if(positionn==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }else if(positionn==len){
        Node * temp=tail->prev;
        temp->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=temp;

    }else{
         Node* prevnode=NULL;
         Node* currnode=head;
         while(positionn!=1){
            positionn--;
            prevnode=currnode;
            currnode=currnode->next;
         }
         Node* nextnode=currnode->next;
         prevnode->next=nextnode;
         currnode->prev=NULL;
         currnode->next=NULL;
         nextnode->prev=prevnode;
         delete currnode;
    }
}
int main(){
   Node* head=NULL;
   Node*tail=NULL;
   insertatposition(head,tail,20,1);
   insertatposition(head,tail,30,2);
   insertatposition(head,tail,40,3);
   insertatposition(head,tail,50,4);
   insertatposition(head,tail,60,4);
   print(head);
   deletenode(head,tail,1);
   deletenode(head,tail,2);
    deletenode(head,tail,3);
    deletenode(head,tail,1);
    deletenode(head,tail,1);
    deletenode(head,tail,1);
    print(head);
    cout<<"length of linked list is "<<findlength(head);

}