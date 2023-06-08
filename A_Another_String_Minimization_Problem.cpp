#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string s="";
    for(int i=0;i<m;i++){
        s+='B';
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int y=min(x-1,m-x);
        int z=max(x-1,m-x);
        if(s[y]=='B'){
            s[y]='A';
        }
        else{
            s[z]='A';
        }
    }
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}