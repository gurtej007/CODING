#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    ll x=n;
    ll cur=1;
    while(n%10==0){
        n/=10;
    }
    while(n%5==0 && cur*2<=m){
        n/=5;
        cur*=2;
    }
    while(n%2==0 && cur*5<=m){
        n/=2;
        cur*=5;
    }
    while(cur*10<=m){
        cur*=10;
    }
    cout<<(m/cur)*(cur*x)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}