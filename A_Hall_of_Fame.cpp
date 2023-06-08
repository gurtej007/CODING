#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L' && s[i+1]=='R'){
                flag=1;
                ans=i+1;
                break;
            }
            if(s[i]=='R' && s[i+1]=='L'){
                flag=1;
            }
        }
        if(!flag){
            cout<<-1<<"\n";
        }
        else{
            if(flag)
            cout<<ans<<"\n";
        }
    }
}