#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> sk(n);
    ll z=0,o=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        cin>>sk[i];
        if(v[i]==0){
            z++;
        }
        else{
            o++;
        }
    }
    
    vector<ll> arr1(z),arr2(o);
    for(int i=0;i<n;i++){
        if(v[i]==0){
            arr1[i]=sk[i];
        }
        else{
            arr2[i]=sk[i];
        }
    }
    for(ll i=0;i<z;i++){
        sum+=arr1[i];
    }
    for(ll i=0;i<z;i++){
        sum+=arr2[i];
    }
    
    sort(arr1.begin(),arr1.end(),greater<ll>());
    sort(arr2.begin(),arr2.end(),greater<ll>());
    if(z==o){
        sum+=sum-min(arr1[z-1],arr2[o-1]);
        cout<<sum<<"\n";

    }
    else{
        ll mini=min(z,o);
        for(int i=0;i<mini;i++){
            sum+=arr1[i]+arr2[i];
        }
        cout<<sum<<'\n';
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}