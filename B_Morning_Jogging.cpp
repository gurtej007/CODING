#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v(n,vector<int> (k));
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            for (int j = 0; j<k; j++)
            {
                cin>>v[i][j];
                pq.push(v[i][j]);
            }
            while(pq.size()>k){
                pq.pop();
            }
        }
        map<int,vector<int>> mp;
        int j=0;
        while(pq.size()!=0){
            mp[pq.top()].push_back(j++);
            pq.pop();
        }
        vector<vector<int>> ans(n,vector<int>(k));
        int z=0;
        for(int i=0;i<n;i++){
            vector<int> vis(k,0);
            for(int j=0;j<k;j++){
                if(mp[v[i][j]].size()>0){
                    int x=mp[v[i][j]].size();
                    ans[i][mp[v[i][j]][x-1]]=v[i][j];
                    vis[mp[v[i][j]][x-1]]=1;
                    mp[v[i][j]].pop_back();
                }
                else{
                    for(int z=0;z<k;z++){
                        if(!vis[z]){
                            ans[i][z]=v[i][j];
                            vis[z]=1;
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}