#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n;
    cin>>n;
    string s="";
    for(ll i=0;i<n;i++){
        s+="BAN";
    }

    if(s==""){
        cout<<0<<"\n";
        return ;
    }
    ll i=0,j=3*n-1;
    vector<pair<ll,ll>> ans;
    while(i<j){
        ans.push_back({i+1,j+1});
        swap(s[i],s[j]);
        i+=3;
        j-=3;
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}