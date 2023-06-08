#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v[n];
        for(int j=0;j<n;j++){
            int m;
            cin>>m;
            for(int i=0;i<m;i++){
                int x;
                cin>>x;
                v[j].push_back(x);
            }
            
        }
        vector<bool> vis(50000+10);
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            bool f=0;
            for (auto it:v[i]){
                if(!f && !vis[it]){
                    f=1;
                    ans.push_back(it);
                    vis[it]=1;
                }
                else
                    vis[it]=1;
            }
        }
        if(ans.size()==n){
            for(int i=n-1;i>=0;i--){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"-1\n";
            
        }
    }
}