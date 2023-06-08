#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main(){
    ll t;
    cin>>t;
    map<ll,ll> vis,m;
    
    while(t--){
        string s;
        ll k;
        cin>>s>>k;
        if(s=="+"){
            vis[k]=1;
        }
        else{
            ll v=m[k]+k;
            while (vis[v]){
                m[k]=v;
                v+=k;
            }
            
            
            cout<<v<<"\n";
        }
    }
}