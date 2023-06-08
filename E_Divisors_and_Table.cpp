#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> arr;
        ll z=m*k;
        for(ll i=1;i<=sqrt(z);i++){
            if(z%i==0){
                arr.push_back(i);
            }
            if(z/i!=i){
                arr.push_back(z/i);
            }

        }
        ll idx=0;
        ll x=1;
        ll ans=0;
        ll res=0;
        while(idx<arr.size() && x<=n){
            if(arr[idx]<=n*x){
                if(arr[idx]%x==0){
                    ans++;
                    res=(res^x);
                }
            }
            else{
                x++;
                if(arr[idx]%x==0){
                    ans++;
                    res=(res^x);
                }
                if(arr[idx]/x>n){
                    x++;
                }
            }
            idx++;
        }
        cout<<ans<<" "<<res<<"\n";
    }
}