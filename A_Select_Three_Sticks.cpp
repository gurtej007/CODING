#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=INT_MAX;
    for(int i=1;i<n-1;i++){
        int diff=(v[i]-v[i-1])+(v[i+1]-v[i]);
        ans=min(ans,diff);
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