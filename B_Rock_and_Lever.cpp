#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            for(ll j=31;j>=0;j--){
                if(((v[i])>>j & 1)==1){
                    mp[j]++;
                    break;
                }
            }
        }
        ll ans=0;
        for(auto it:mp){
            ll x=it.second-1;
            ans=ans+(x*(x+1)/2);
        }
        cout<<ans<<"\n";
    }
}