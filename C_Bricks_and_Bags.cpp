#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll b1,b2,b3;
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll maxi=-1;
    ll mini=1e9;
    for(ll i=0;i<n;i++){
        
        cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    ll ans=-1;
    for(ll i=1;i<n-1;i++){
        ans=max(ans,v[n-1]-v[i-1]+v[i]-v[i-1]);
    }
    for(ll i=2;i<n;i++){
        ans=max(ans,v[i]-v[0] + v[i]-v[i-1]);
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