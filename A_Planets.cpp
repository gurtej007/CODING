#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,c;
    cin>>n>>c;
    map<int,int> mp;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans=0;
    for(auto it:mp){
        if(it.second>=c){
            ans+=c;
        }
        else{
            ans+=it.second;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}