#include <bits/stdc++.h>
using namespace std;

#define ll long long

class heap{
public :
int *arr;
int capacity;
int size;
heap(int capacity){
    this->arr=new int[capacity];
    this->capacity=capacity;
    this->size=0;
}
void insert(int val){
    //maxheap
    if(size==capacity){
        cout<<"Heap Overflow"<<endl;
        return;
    }

    size++;
    int index=size;
    arr[index]=val;
    while(index>1){
        int parentindex=index/2;
        if(arr[index]>arr[parentindex]){
            swap(arr[index],arr[parentindex]);
            index=parentindex;
        }else{
            break;
        }
    }
}
int delet(){
    int answer=arr[1];
    arr[1]=arr[size];
    size--;
    int index=1;
    while(index<size){
     int left=2*index;
     int right=2*index+1;
     int largest=index;
     if(left<=size && arr[largest]<arr[left]){
        largest=left;
     }
     if(right<=size && arr[largest]<arr[right]){
        largest=right;
     }
     if(index==largest){
        break;
     }else{
        swap(arr[index],arr[largest]);
        index=largest;
     }
    }
    return answer;

}
void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<endl;
    }
}
};
void heapify(int *arr,int n,int index){
    int left=2*index;
    int right=2*index+1;
    int largest=index;
    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }
    if(index!=largest){
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,n,index);
    }
}
void BuildHeap(int arr[],int n){
    for(int index=n/2;index>0;index--){
        heapify(arr,n,index);
    }
}
void heapsort(int arr[],int n){
    //nlogn
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    } 
}

int main() {
   // min heap parent node smaller than child node 
   // max heap child node larger than child node
   // in heap parentindex=index/2
   //insertion logn 
   //Deletion at root node
   // array to heap n complexcity
   // min max finf by heap 0(1)
   //Delete log n

   
    heap h(20);
    h.insert(10);
    h.insert(100);
    h.insert(20);
    h.insert(400);
    //h.print();
    h.delet();
    h.print();
    return 0;
}