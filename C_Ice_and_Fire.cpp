#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=1;
    cout<<ans<<" ";
    char y=s[0];
    int x=0;
    for(int i=1;i<n-1;i++){
        if(y!=s[i]){
            ans+=i-x;
            cout<<ans<<" ";
            y=s[i];
            x=i;
        }
        else{
            cout<<ans<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}