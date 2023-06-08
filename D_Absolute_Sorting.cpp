#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool f1=0,f2=0,f=0;
    int ans=0;
    ll x=0,y=1e9;
    for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            y=min(y,(v[i]+v[i+1])/2);
        }
        if(v[i]>v[i+1]){
            x=max(x,(v[i]+v[i+1])/2);
        } 
    }
    if(y>=x){
        cout<<x<<'\n';
    }
    else{
        cout<<-1<<"\n";
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}