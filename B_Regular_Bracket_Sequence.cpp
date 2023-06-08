#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int o=0,c=0,ans=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            o++;
        }
        else{
            c++;
        }
        if(c<=o){
            ans=2*c;
            res=max(res,ans);
        }
        else{
            
            o=0;c=0;
        
        }
        
    }
    res=max(res,ans);
    cout<<res<<"\n";
}