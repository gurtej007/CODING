#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,h,w;
    cin>>n>>h>>w;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,(b[i]-w)-(a[i]-h));
        maxi=max(maxi,(b[i]+w)-(a[i]+h));
    }
    if(maxi<=mini){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}