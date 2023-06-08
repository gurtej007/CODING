#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll x=0,y=0;
    for(auto it:mp){
        if(it.second>=2){
            x++;
        }
        else{
            y++;
        }
    }
    cout<<x+(y+1)/2<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}