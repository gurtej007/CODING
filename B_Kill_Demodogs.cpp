#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=(n*n)%m;
        ll ans=x;
        x-=n;
        ll i=n-1;
        while(x>=1){
            ans+=(x-i%m)+(x-(2*i)%m);
            x-=(2*i)%m;
            i--;
        }  
        cout<<(ans%m*2022LL)%m<<"\n"; 
    }
}