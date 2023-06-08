#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int o1=0,o2=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                o1++;
            }
            else if(s[i]==')'){
                if(o1>0){
                    ans++;
                    o1--;
                }
            }
            else if(s[i]=='['){
                o2++;
            }
            else{
                if(o2>0){
                    ans++;
                    o2--;
                }
                
            }
        }
        cout<<ans<<"\n";
    }
}