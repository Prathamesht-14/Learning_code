#include<iostream>
using namespace std;
int main(){
    char ch='5';
    int a=ch-'0';
    char b=a+'0';
    cout<<b<<endl;
    cout<<a<<endl;
    int str=1234;
    string str1=to_string(str);
    cout<<str1<<endl;
    int  str2=stoi(str1);
    cout<<str2;
}