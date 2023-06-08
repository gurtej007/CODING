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
        ll a=n;
        ll d=log2(n);
         ll ans=1;
        for(int i=0;i<d;i++){
            ans*=2;
        }
        cout<<ans-1<<"\n";
    }
}