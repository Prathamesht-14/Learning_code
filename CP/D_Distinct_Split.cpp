 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
     int t;
     cin >> t;
     while (t--) {
        int n;
        cin>>n;
         string s;
         cin >> s;
         
         vector<int> a(n),b(n),freq1(26,0),freq2(26,0);a[0]=1;freq1[s[0]-'a']=1;
         for (int i = 1; i < n; ++i) {
             if(freq1[s[i]-'a']==0){
                a[i]=a[i-1]+1;
                freq1[s[i]-'a']=1;
             }else{
                 a[i]=a[i-1];
             }
         }
         b[n-1]=1;freq2[s[n-1]-'a']=1;
         for (int i = n-2; i >=0; i--) {
             if(freq2[s[i]-'a']==0){
                b[i]=b[i+1]+1;
                freq2[s[i]-'a']=1;
             }else{
                 b[i]=b[i+1];
             }
         }
         int ans=0;
         for(int i=0;i<n-1;i++){
            ans=max((a[i]+b[i+1]),ans);
         }
         
         
         cout<<ans<<endl;
         
     }
 
     return 0;
 }