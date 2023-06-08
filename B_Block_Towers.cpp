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
    sort(v.begin()+1,v.end());
    ll x=v[0];
    int i=1;
    while(i<n){
        if(v[i]>x){
            x=(x+v[i]+1)/2;
        }
        i++;
    }
    cout<<x<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}