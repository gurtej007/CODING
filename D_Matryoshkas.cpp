#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(mp[a]==0){
                v.push_back(a);         
            }
            mp[a]++;
        }
        sort(v.begin(),v.end());
        ll ans=mp[v[0]];
        for(ll i=1;i<v.size();i++){
            if(v[i]==(v[i-1]+1)){
                if(mp[v[i-1]]<mp[v[i]])
                    ans+=(mp[v[i]]-mp[v[i-1]]);
            }
            else{
                ans+=mp[v[i]];
            }
        }
       
        cout<<ans<<"\n";
    }
}