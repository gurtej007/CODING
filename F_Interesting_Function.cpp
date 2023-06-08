#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans=b-a;
        ll z=10;
        while(z<=b){
            ans+=(b/z-a/z);
            z*=10;

        }
        cout<<ans<<"\n";
    }
}