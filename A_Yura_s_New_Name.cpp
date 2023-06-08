#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int ans=0;
        if(n==1){
            if(s[0]=='^'){
                cout<<"1\n";
            }
            else{
                cout<<"2\n";
            }
            continue;
        }
        if(s[0]=='_'){
            int id=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='^'){
                    ans+=i;
                    id=i;
                    break;
                }
            }
            if(id==-1){
                cout<<n+1<<"\n";
                continue;
            }
            for(int i=id+1;i<n;i++){
                if(s[i]=='^'){
                    ans+=max(i-id-2,0);
                    id=i;
                }
            }
            ans+=n-1-id;
        }
        else{
           
            int id=0;
            for(int i=1;i<n;i++){
                if(s[i]=='^'){
                    ans+=max(i-id-2,0);
                    id=i;
                }
            }
            ans+=n-1-id;
        }
        cout<<ans<<"\n";
    }
}