#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        ll cnt=0;
        ll ind=0;
        int z=1;
        for(ll i=1;i<n;i++){
            if((v[i-1]/2)>=v[i]){
                cnt=0;
            }
            else{
                cnt++;
            }
            if(cnt>=k){
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
}