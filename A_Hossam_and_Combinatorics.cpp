#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n ;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    sort(v.begin(),v.end());

    ll x=mp[v[0]];
    if(v[0]!=v[n-1]){
        ll y=mp[v[n-1]];
        cout<<(2*x*y)<<"\n";
    }
    else{
        cout<<n*(n-1)<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}