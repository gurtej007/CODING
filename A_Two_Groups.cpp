#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    ll pos=-1;
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        if(v[i]>=0){
            pos=i;
            break;
        }
    }
    ll sum=0;
    ll sum1=0;
    if(pos==-1){
        for(ll i=0;i<n;i++){
            sum+=v[i];
        }
        cout<<abs(sum)<<"\n";
    }
    else if(pos==0){
        for(ll i=0;i<n;i++){
            sum+=v[i];
        }
        cout<<abs(sum)<<"\n";
    }
    else{
        for(ll i=pos;i<n;i++){
            sum+=v[i];
        }
        for(ll i=0;i<pos;i++){
            sum1+=v[i];
        }
        cout<<abs(sum-abs(sum1))<<"\n";
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}