#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<0<<"\n";
        return ;
    }
    ll ans=INT_MIN;
    ll maxi=-1,mini=1e9;
    for(ll i=1;i<n;i++){
        maxi=max(maxi,v[i]); 
    }
    for(ll i=0;i<n-1;i++){
        mini=min(mini,v[i]);
    }
    for(ll i=1;i<n;i++){
        ans=max(ans,v[i-1]-v[i]);
    }
    
    cout<<max(ans,max((maxi-v[0]),(v[n-1]-mini)))<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}