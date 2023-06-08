#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,vector<int>>  mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]].push_back(i);
    }
    vector<int> ans(n+1,0);
    for(auto i:mp){
        if(i.second.size()==1){
            ans[i.first]=1;
            continue;
        }
        else{
            int cnt=0;
            for(int j=0;j<i.second.size()-1;j++){
                if((i.second[j+1]-i.second[j])%2==0){
                    cnt++;
                }
            }
            ans[i.first]=i.second.size()-cnt;
        }
    }
    for(int i=1;i<n+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}