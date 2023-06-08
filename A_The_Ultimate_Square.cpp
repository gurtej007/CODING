#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n ;
    cin>>n;
    if(n%2==0){
        cout<<n/2;
    }
    else{
        cout<<(n/2)+1;
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