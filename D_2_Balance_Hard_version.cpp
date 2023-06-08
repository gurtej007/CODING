#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main(){
    ll t;
    cin>>t;
    map<ll,ll> vis;
    map<ll,vector<int>> m;
    while(t--){
        string s;
        ll k;
        cin>>s>>k;
        if(s=="+"){
            vis[k]=1;
        }
        if(s=="-"){
            vis[k]=0;
        }
        else{
            for(auto i:m){
                for(auto i)
            }
            while (vis[v]==1){
                m[k].push_back(v);
                v+=k;
            }
            
            
            cout<<v<<"\n";
        }
    }
}