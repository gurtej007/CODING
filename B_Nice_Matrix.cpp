#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    } 
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vector<int> a;
            a.push_back(v[i][j]);
            a.push_back(v[i][m-j-1]);
            a.push_back(v[n-i-1][j]);
            sort(a.begin(),a.end());
            v[i][j]=v[i][m-j-1]=v[n-i-1][j]=a[1];
            ans+=((a[2]-a[1])+(a[1]-a[0]));
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();

    }
}