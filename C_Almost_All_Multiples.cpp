#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> vis(n+1,0);
    vis[x]=1;vis[1]=1;
    vector<int> ans(n+1);
    ans[1]=x;
    ans[n]=1;
    for(int i=2;i<n;i++){
        if(!vis[i]){
            ans[i]=i;
            vis[i]=1;
        }
        else{
            int j=1;
            while(i*j<=n){
                if(!vis[i*j] && n%(i*j)==0){
                    ans[i]=i*j;
                    vis[i*j]=1;
                    break;
                }
                j++;
            }
        }
        if(ans[i]==0){
            cout<<-1<<" ";
            return ;
        }
        
    }
    for(int i=1;i<=n;i++){
         cout<<ans[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}