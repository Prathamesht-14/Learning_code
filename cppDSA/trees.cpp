#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;;
    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* createtree(){
  cout<<"enter value of node";int data;
  cin>>  data;
  if(data==-1){
    return NULL;
  }
  node* root = new node(data);
  cout<<"left of node  "<<root->data<<endl;
  root->left=createtree();
  cout<<"right of node  "<<root->data<<endl;
  root->right=createtree();
  return root;
}
void levelwisetraversal(node* root){
    queue<node*>q;
    q.push(root);q.push(NULL);
    while(q.size()>1){
        node*front=q.front();
        q.pop();
        if(front==NULL){
        cout<<endl;
        q.push(NULL);
        }else{
            cout<<front->data<<endl;
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}
int main(){
node * Root=createtree(); 
levelwisetraversal(Root);
}