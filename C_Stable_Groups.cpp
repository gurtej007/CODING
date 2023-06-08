#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=1;
    sort(v.begin(),v.end());
    vector<ll> diff;
    for(ll i=1;i<n;i++){
        diff.push_back(v[i]-v[i-1]);
    }
    sort(diff.begin(),diff.end());
   
    for(ll i=0;i<n-1;i++){
        if(diff[i]>x){
            if(diff[i]%x==0){
                ll req=diff[i]/x;
                if(req==1 && k>=req){
                    k-=req;
                }
                else if(k>=req-1)
                    k-=req-1;
                else
                    ans++;
            }
            else{
                if(k>=diff[i]/x)
                    k-=diff[i]/x;
                else
                    ans++;
            }
        }
    }
    cout<<ans<<"\n";
}
// 1 1 1 6 6 6 8 8 10 10
// 0 0 5 0 0 2 0 2 0
// 0 0 0 0 0 0 2 2 5