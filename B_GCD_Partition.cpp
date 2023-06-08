#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll x=v[0];
        ll ans=__gcd(x,sum-x);
        for(int i=1;i<n;i++){
            x+=v[i];
            if(x!=sum)
                ans=max(ans,__gcd(x,sum-x));
        }
        cout<<ans<<"\n";
    }
}