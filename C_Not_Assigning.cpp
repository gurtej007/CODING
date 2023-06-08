#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n-1,vector<int>(2));
    for(int i=0;i<n-1;i++){
        cin>>adj[i][0]>>adj[i][1];
    }
    for(int i=0;i<n-1;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    sort(adj.begin(), adj.end());
    for(int i=0;i<n-1;i++){
        cout<<adj[i][0]<<adj[i][1]<<"\n";
    }
    cout<<"\n";
    vector<int> v(n-1);
    
                       
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}