#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int s=v[i][j];
                int col=j+1,row=i+1;
                while(row<n && col<m){
                    s+=v[row++][col++];
                }
                col=j-1;row=i-1;
                while(col>=0 && row>=0){
                    s+=v[row--][col--];
                }
                col=j-1;row=i+1;
                while(col>=0 && row<n){
                    s+=v[row++][col--];
                }
                col=j+1;row=i-1;
                while(col<m && row>=0){
                    s+=v[row--][col++];
                }
                ans=max(ans,s);
            }
        }
        cout<<ans<<"\n";
    }

}