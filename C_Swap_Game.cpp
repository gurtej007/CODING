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
    ll mini=1e9;
    for(int i=1;i<n;i++){
        mini=min(mini,v[i]);
    }
    if(mini>=v[0]){
        cout<<"BOB"<<"\n";
    }
    else{
        cout<<"ALICE"<<"\n";
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}