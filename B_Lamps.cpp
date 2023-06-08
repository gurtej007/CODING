#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            mp[a].push_back(b);
        }
        int ans=0;
        int cnt=0;
        for(auto it:mp){
            vector<int> v=mp[it.first];
            sort(v.begin(),v.end(),greater<int>());
            int x=min(it.first,v.size()*1LL);
            for(int i=0;i<x;i++){
                ans+=v[i];
            }
           
        }
        cout<<ans<<"\n";

    }
}