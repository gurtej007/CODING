#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n ;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll> v(k);
    for(ll i=0;i<k;i++){
        cin>>v[i];
        
    }
    if(k==1){
        cout<<"Yes"<<'\n';
        return ;
    }
    ll diff=-1e9;
    for(ll i=1;i<k;i++){
        if(v[i]-v[i-1]>=diff){
            diff=v[i]-v[i-1];
        }
        else{
            cout<<"No"<<"\n";
            return ;
        }
    }
    ll x=v[1]-v[0];
    if((n-k+1)*x>=v[0]){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";

    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}