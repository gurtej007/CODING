#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> mp[2000000];

void dfs(int id,int cnt,int node,int prev,int &ans){
    
    ans=max(ans,cnt);
    for(pair<int,int> it:mp[node]){

        if(it.first!=prev) 
                dfs(it.second,cnt+(id>it.second),it.first,node,ans);
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            mp[i].clear();
        }
        for(int i=0;i<n-1;i++){
            int x;
            int y;
            cin>>x>>y;
            mp[x].push_back({y,i});
            mp[y].push_back({x,i});
        }
        int ans=1;
        dfs(1e9,0,1,1,ans);
        cout<<ans<<"\n";
    }
}