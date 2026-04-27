#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
   array<int,4>  a={1,2,3,4};
   cout<<a.at(2);
   vector<int> v;
   v.push_back(1);
   cout<<v.size();
   cout<<v.capacity();
   v.push_back(2);
   v.push_back(3);
   cout<<v.size();
   cout<<v.capacity();
   cout<<"before pop";cout<<endl;
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;
   cout<<"after pop";
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;
   v.clear();
   cout<<v.size();
   cout<<v.capacity()<<endl;
   vector<int> b(5,1);
   for(int i:b){
    cout<<i<<" ";
   }
   vector<int>c(b);

}