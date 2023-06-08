#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    for(ll i=0;i<n;i++){
        vector<ll> cnt(10,0);
        ll freq=0,dis=0;
        for(ll j=i;j<n&&j<=i+99;j++){
            cnt[s[j]-'0']++;
            if(cnt[s[j]-'0']==1){
                dis++;
            }
            freq=max(freq,cnt[s[j]-'0']);
            if(freq<=dis){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}