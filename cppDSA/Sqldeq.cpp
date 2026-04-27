#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>>
int main(){
   // deque<int> d; 
   //   d.push_back(2);
   //   d.push_front(1);
   //   for(int i:d ){
   //    cout<<i;
   //   }cout<<endl;
   //   //d.pop_back();
   //   ///d.pop_front();
   //   cout<<d.at(1)<<d.front()<<d.back()<<d.size()<<endl;
   //   d.erase(d.begin(),d.begin()+1);
   //   cout<<d.size();
   //list
   //   list<int> l;
   //    l.push_back(2);
   //    l.push_front(1);
   //    for(int i:l ){
   //    cout<<i;
   //   }cout<<endl;
   //  cout<<l.size();
   //   list<int> n(l);
   //   l.erase(l.begin());
     
   //   stack<string> s;
   //   s.push("love");
   //    s.push("babbar");
   //     s.push("creater");
   //     cout<<s.top();
   vector<int> v; 
   v.push_back(1);
   v.push_back(7);
   v.push_back(0);
   v.push_back(5);
   cout<<binary_search(v.begin(),v.end(),0);
   cout<<lower_bound( v.begin(),v.end(),0)-v.begin();


}