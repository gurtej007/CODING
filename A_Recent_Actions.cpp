#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        int x=n-1;
        vector<int> ans(n+1,-1);
        ans[n]=1;
        int t=2;
        vector<int> vis(n+m+1,0);
        vis[v[0]]=1;
        for(int i=1;i<m;i++){
            if(v[i]==v[i-1]){
                t++;
                continue;
            }
            else{
                if(x<=0){
                    break;
                }
                if(!vis[v[i]] ){
                    ans[x]=t;
                    x--;
                }
                vis[v[i]]=1;
            }
            t++;
        }
    
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}