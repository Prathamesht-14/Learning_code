#include<iostream>
#include<string.h>;
using namespace std;
int findl(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
        
     if(ch[i]=='\0'){
        break;
     }else{length++;}
    }return length;
}
void reverse(char ch[], int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;e--;
    }
}
void convert(char ch[],int size){
   int index=0;
   while(ch[index]!='\0'){
    if(ch[index]>='a' && ch[index]<='z'){
        ch[index]=ch[index]-'a'+'A';
    }index++;
   }
}
// void replace(char ch[],int size){
//      int index=0;
//      while(ch[index]!='\0'){
//         if(ch[index]=='@'){
//             ch[index]=' ';
//         }index++;
//      }
// }
bool Palindrome(char ch[],int size){
  int s=0; int e=size-1;
  while(s<=e){
    if(ch[s]!=ch[e]){
        return false;
    }s++; e--;
  }return true;
}


int main(){
    char ch[10];
    cin.getline(ch,10);
//     cin>>ch;
//     //cout<<ch;
//     // for(int i=0;i<10;i++){
//     //     cout<<i<<ch[i]<<endl;
//     // }
//     cin.getline(ch,9);
//     char temp=ch[5];
//     int value=(int)temp;
//     cout<<"asci value of \0"<<value;
// return 0;
int ans=findl(ch,100);
cout<<ch<<endl;
//reverse(ch,ans);
//convert(ch,ans);
// replace(ch ,ans);
int boolans=Palindrome(ch,ans);
cout<<boolans;
 cout<<ch; 
// cout<<"length by ans"<<ans<<endl;
// cout<<"length by func"<<strlen(ch);
}