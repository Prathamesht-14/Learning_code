#include <bits/stdc++.h>
using namespace std;
bool goal(int a,int b){
    a=a-2;
    return ((a+1)/2)<=b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        int e=c-a;
        int f=d-b;
        bool flag1 ,flag2;
        if(a>=b){
            flag1=goal(a,b);
        }else{
            flag1=goal(b,a);
        }
        if(e>=f){
            flag2=goal(e,f);  
        }else{
            flag2=goal(f,e);   
        }
        if(flag1&&flag2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    
        
    }

    return 0;
}
