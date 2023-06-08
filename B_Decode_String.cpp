#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    int i=0;
    while(i<n-2){
        if(s[i+2]=='0' && s[i+3]!='0'){
            string str=s.substr(i,2);
            int x=0;
            int j=0;
            while(j<2){
                x=x*10+str[j]-'0';
                j++;
            }
            
            x-=1;
            char ch=char('a'+x);
            ans+=ch;
            i+=3;
        }
        else{
            int x=(s[i])-'0';
            x-=1;
            char ch=char('a'+x);
            ans+=ch; 
            i++;
        }
    }
    while(i<n){
        int x=s[i]-'0';
        x-=1;
        ans+=('a'+x); 
        i++;
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}