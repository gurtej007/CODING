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
    ll s=v[0];
    vector<ll> ans;
    ans.push_back(s);
    for(int i=1;i<n;i++){
        if(s-v[i]>=0 && s-v[i] != s+v[i]){
            cout<<-1;
            return ;
        }
        ans.push_back(s+v[i]);
        s=s+v[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}