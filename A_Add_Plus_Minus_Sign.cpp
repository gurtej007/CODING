#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    int sum=s[0];
    for(int i=1;i<n;i++){
        if(s[i]
        !=sum){
            ans+='+';
            sum+=s[i]-'0';
        }
        else{
            ans+='-';
            sum-=s[i]-'0';
        }
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