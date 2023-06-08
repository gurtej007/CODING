#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=n/2;
    char c=s[x];
    int ans=0;
    if(n%2==0){
        ans+=2;
    }
    else{
        ans++;
    }
    x++;
    while(x<n && s[x]==c){
        ans+=2;
        x++;
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}