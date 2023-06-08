#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>> v(n,vector<int>(m,0));
    int sum=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            v[i][j]=s[j]-'0';
            sum+=v[i][j];
        }
    }
    if(sum==0){
        cout<<0<<"\n";
        return ;
    }
    int mini=4;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int x=v[i][j]+v[i+1][j]+v[i][j+1]+v[i+1][j+1];
            mini=min(mini,x);
        }
    }
    if(mini>2){
        if(mini==4){
            cout<<sum-2<<"\n";
        }
        else{
            cout<<sum-1<<"\n";
        }
    }
    else{
        cout<<sum<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}