#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    ll mini=1e9;
    ll mini1=1e9;
    ll maxi=-1e9;
    int id=0;
    ll sum=0;
    int idx=0;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        arr[i]=sum;
        if(arr[i]<mini && v[i]<0){
            mini=arr[i];
            idx=i;
        }
        if(arr[i]<mini && i<m){
            mini1=arr[i];id=i;
        }
        if(i<m){
            maxi=max(maxi,arr[i]);
        }
    }
    int ans=0;
    if(arr[m-1]==mini){
        cout<<0<<"\n";
        return ;
    }
    ll prev=0;
    for(int i=m;i<n;i++){
        if(arr[i]+prev<arr[m-1]){
            ans++;
            arr[i]+=2*v[i];
            prev+=-2*v[i];
        }
    }
    prev=0;
    for(int i=m-2;i>=0;i--){
        if(arr[i]+prev<arr[m-1]){
            ans++;
            
        }
    }
    cout<<ans<<"\n";
}  
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}