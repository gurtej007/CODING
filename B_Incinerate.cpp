#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> h(n),p(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        v[i].first=p[i];
        v[i].second=h[i];
    }
    sort(v.begin(),v.end());
    int i=0;
    int x=k;
    bool f=0;
    while(i<n){
        while(x<v[i].second){
            x+=(k-v[i].first);
            k-=v[i].first;
            if(k<0){
                f=1;
                break;
            }
        }
        if(f){
            break;
        }
        i++;
    }
    if(!f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}