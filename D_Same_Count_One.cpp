#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    map<int,pair<int,int>> mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        vector<int> v(m);
        int cnt1=0;
        for(int j=0;j<m;j++){
            cin>>v[j];
            if(v[j]==1){
                cnt++;
                mp[cnt1++]={i,j};
            }
        }
    }
    if(cnt%n!=0){
        cout<<-1<<"\n";
        return ;
    }
    for(auto it:mp){
        if(it.first==2){
            continue;
        }
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}