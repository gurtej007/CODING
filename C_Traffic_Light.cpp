#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        char ch;
        cin>>ch;
        string s;
        cin>>s;
        s+=s;
        
        int p=-1;
        int ans=0;
        for(int i=0;i<2*n;i++){
            if(s[i]==ch && p==-1){
                p=i;
            }
            if(s[i]=='g' && p!=-1){
                ans=max(ans,i-p);
                p=-1;
            }
        }
        cout<<ans<<"\n";
    }
}