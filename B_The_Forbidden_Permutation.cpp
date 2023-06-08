#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n>>m>>d;
        vector<int> v(n),a(n);
        vector<int> pos(n+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            pos[v[i]]=i+1;
        }
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int ans=INT_MAX;
       
        for(int i=0;i<m-1;i++){
            
            int c=pos[a[i]];
            int nx=pos[a[i+1]];
            if(c>nx || c+d<nx){
                ans=0;
                continue;
            }
      
            int diff=nx-c;
          
            ans=min(ans,diff);
            if(d+1<n){
                ans=min(ans,d+1-diff);
            }
        }
        cout<<ans<<"\n";
    }
}