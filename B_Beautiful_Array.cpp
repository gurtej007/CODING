#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll z=k*b+n*(k-1);
    if(s>z || s<k*b){
        cout<<"-1\n";
        return ;
    }
    vector<ll> v(n);
    v[0]=k*b;
    s=s-k*b;
    if(s>0){
        v[0]+=min(s,k-1);
        s-=min(s,k-1);
    }
    for(ll i=1;i<n;i++){
        if(s>0){
            v[i]=min(k-1,s);
            s=s-min(k-1,s);
        }
        else
            v[i]=0;
        
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}