#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,q;
    cin>>n>>q;
    vector<ll> v1(n);
    vector<pair<ll, ll>> v2(q);

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<q;i++){
        cin>>v2[i].first;
        v2[i].second=i;
    }
    sort(v2.begin(),v2.end());
    ll pos=0;
    ll sum=0;
    vector<ll> ans(q);
    for(int i=0;i<q;i++){
        
        while(pos<n && v1[pos]<=v2[i].first){
            sum+=v1[pos++];
        }
        ans[v2[i].second]=sum;
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}