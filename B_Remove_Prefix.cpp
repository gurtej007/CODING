#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<bool> vis(n+1,0);
    int idx=-1;
    for(int i=n-1;i>=0;i--){
        if(!vis[v[i]]){
            vis[v[i]]=1;
        }
        else{
            idx=i;
            break;
        }
    }
    cout<<(idx+1)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}