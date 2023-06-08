#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> ans(n+1,0);
        vector<int> nv;
        vector<int> vis(n+1,0);
        int mini=v[n-1];
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                int x=v[i]-v[i+1];
                if(ans[x+1]!=0){
                    vis[ans[x+1]]=0;
                }
                ans[x+1]=i+2;
                vis[i+2]=1;

            }
        }
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                nv.push_back(i);
            }
        }
        int x=nv.size()-1;
        for(int i=1;i<=n;i++){
            if(ans[i]==0){
                cout<<nv[x--]<<" ";
            }
            else{
                cout<<ans[i]<<" ";
            }
        }
        cout<<"\n";
    }
}