#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sr=0;
    int sc=0;
    int er=n-1;
    int ec=n-1;
    vector<vector<int>> v(n,vector<int> (n));
 
    int t=n*n;
    int cnt=0;
    bool f=1;
    int x=1;
    int y=n*n;
    while(cnt<t){
        for(int i=sc;i<=ec;i++){
            if(f){
                v[sr][i]=x++;
            }
            else{
                v[sr][i]=y--;
            }
            f=!f;
        }
        sr++;
        for(int i=sr;i<=er;i++){
            if(f){
                v[i][ec]=x++;
            }
            else{
                v[i][ec]=y--;
            }
            f=!f;
        }
        ec--;
        for(int i=ec;i>=sc;i--){
            if(f){
                v[er][i]=x++;
            }
            else{
                v[er][i]=y--;
            }
            f=!f;
        }
        er--;
        for(int i=er;i>=sr;i--){
            if(f){
                v[i][sc]=x++;
            }
            else{
                v[i][sc]=y--;
            }
            f=!f;
        }
        sc++;
        cnt++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}