#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> vis(1001,-1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        vis[v[i]]=i+1;
    }
    int ans=-1;
    for(int i=1;i<1001;i++){
        for(int j=i;j<1001;j++){
            if(vis[i]>0 && vis[j]>0){
                if(__gcd(i,j)==1){
                    ans=max(ans,vis[i]+vis[j]);
                }
            }
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