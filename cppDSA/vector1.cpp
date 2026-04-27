#include<iostream>
#include<vector>
using namespace std;
void printaray(int a[],int n){
    for(int i=0 ;i<n;i++){ 
    cout<<a[i]<<endl;
    }
}
void printv(vector<int> v){
    int size =v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
}
int main(){ 
    vector<int>v; 
  

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // printv(v);
    // v.pop_back();
    // printv(v);
    // int n; cin>>n;
    // for(int i=0 ;i<n;i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<v[i]<<endl;
    //     cout<<v.at(i);
    // }
        vector<int>arr;
        vector<int>arr2(5,-1);
        vector<int>arr5={1,2,3,4,5};
        vector<int>arr3{1,2,3,4,5};
        printv(arr);
        vector<int>arr6(arr5);//copy vector
        printv(arr2);
        printv(arr5);
        printv(arr3);
        printv(arr6);
      // last element  v[v.size()-1] /v.back
      // front element  v.front / v[0]

    }
    
    //  to clear vecor v.clear()


    // int n; 
    // cin>>n;
    // int *array=new int[n];
    // for(int i=0;i<n;++i){
    //     int data;
    //     cin>>data;
    //     array[i]=data;
    // }
    //     printaray(array,n); 
   