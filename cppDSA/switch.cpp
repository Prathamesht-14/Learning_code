#include<iostream>
using namespace std;

int main(){
    char num='a';
    int a,b;
    cin>>a;
    cin>>b;
    char op;
    cin>>op;
    switch(op){
        case '+':cout<<(a+b)<<endl;
                 break;
        case '-':cout<<(a-b)<<endl;
                 break;
        case '*':cout<<(a*b)<<endl;
                 break;
        case '%':cout<<(a%b)<<endl;
                 break;
    }

    return 0;
}