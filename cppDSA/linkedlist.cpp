#include<iostream>
using namespace  std;
class Node{
    public:
    int data;
    Node*next;
    Node(){
        //cout<<"default constructor";
    this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(Node* &head,Node* &tail,int data){
    if(head==NULL){
    Node* Newnode=new Node(data);
    head=Newnode;
    tail=Newnode;
    }
   else { Node* Newnode=new Node(data);
    Newnode->next=head;
    head=Newnode;}
}
int findlength(Node *head){
    Node*Temp=head;int count=0;
    while(Temp!=NULL){
       
        Temp=Temp->next;
        count++;
    }
    return count;
}
void deletenode(Node* &head,Node* &tail,int position){
    int len=findlength(head);
  if(head==NULL ){
    cout<<"LInked list is empty";return;
  }else if(head==tail){
    Node* Newnode=head;
    delete Newnode;
    head=NULL;
    tail==NULL;return;
  }else if(position==1){
    Node * temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    return;
  }else if(position==len){
    Node* prev=head;
    while(prev->next!=tail){
        prev=prev->next;
    }
    prev->next=NULL;
    delete tail;
    tail=prev;
  } else{
    Node *prev=NULL;
    Node *curr=head;
    while(position!=1){
        position--;
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
  }
}

void print(Node *head){
    Node*Temp=head;int count=0;
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->next;
        count++;
    }cout<<endl;
    //cout<<"length of linked list is "<<count<<endl;
}

void insertatTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
    Node* Newnode=new Node(data);
    head=Newnode;
    tail=Newnode;
    }
    else {Node* NewNode=new Node(data);
    tail->next=NewNode;
    tail=NewNode;}
}
void insertatposition(Node * &head,Node *&tail,int data,int position) {
     int len=findlength(head);
     if(position<=1){
        insertathead(head,tail,data);
        return;
     }else if(position>len){
        insertatTail(head,tail,data);
        return;
     }else{
        Node* newNode = new Node(data);
        Node* curr=head;
        Node* prev=NULL;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            
            position--;
        }
        prev->next=newNode;
         newNode->next=curr;

         
     } 
}
int  main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,40);
    insertatTail(head,tail,20);
   insertatposition(head,tail,24,2);
   insertatposition(head,tail,25,1);
   insertatposition(head,tail,14,5);
    print(head);
//      Node *first=new Node(5);
//      Node *second=new Node(10);
//      Node *third=new Node(15);
//      Node *fourth=new Node(20);
//      Node *fifth=new Node(25);
//      first->next=second;
//      second->next=third;
//      third->next=fourth;
//      fourth->next=fifth;
//      Node *head=first;Node* tail =fifth ;
//      print(head);
//      cout<<"after inserting at head"<<endl;
//      insertathead(head,tail,14);
//      print(head);
//      cout<<"after inserting at tail"<<endl;
//      insertatTail(head,tail,2514);
//      print(head);
}