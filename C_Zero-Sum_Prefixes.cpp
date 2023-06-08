#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0,ans=0;
    bool flag=0;
    map<ll,ll> freq;
    ll maxf=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            if(flag){
                ans+=maxf;
            }
            else{
                ans+=freq[0];
            }
            flag=1;
            freq.clear();
            maxf=0;
        }
        sum+=v[i];
        maxf=max(maxf,++freq[sum]);
    }
    if(flag) 
        ans+=maxf;
    else
        ans+=freq[0];
    cout<<ans<<"\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}