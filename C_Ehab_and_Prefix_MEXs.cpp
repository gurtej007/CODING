#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> ans(n,-1);
    if(v[0]>1){
        cout<<"-1\n";
    }
    else{
        
        bool f=1;
        vector<int> vis(n+1,0);
        for(int i=n-2; i>=0; i--){
            if(v[i]>i+1 || v[i+1]>i+2){
                f=0;
                break;
            }
            if(v[i]!=v[i+1]){
                ans[i+1]=v[i];
                vis[ans[i+1]]=1;
            }
            
        }
        vis[v[n-1]]=1;
        int m=0;
        for(int i=0;i<n;i++){
            while(vis[m]){
                m++;
            }
            if(ans[i]==-1){
                ans[i]=m;
                vis[m]=1;
            }
        }
        if(!f){
            cout<<"-1\n";
        }
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            
        }

    }
}