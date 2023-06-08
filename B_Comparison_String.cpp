#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=1;
        int len=1;
        for(int i=1;i<n;i++){
           
            if(s[i]==s[i-1]){
                ans++;
            }
            else{
                len=max(ans,len);
                ans=1;
            }
            
            
        }
        len=max(len,ans);
        cout<<len+1<<endl;
    }
}