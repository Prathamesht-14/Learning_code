 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  m,n;
        cin >>m>> n;
       long long sub=abs(m-n);
        if(sub==0){
            cout<<"0 0"<<endl;
        }else if(sub==1){
            cout<<"1 "<<0<<endl;
        }else{
          long long ans1=(m%sub);
            long long ans2=(n%sub);
            long long ans3=sub-ans1;
       long long ans4=sub-ans2;
            cout<<sub<<" "<<min({ans1,ans2,ans3,ans4})<<endl;
        }
        
        
    }

    return 0;
}