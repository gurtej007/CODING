#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,pair<int,int>> mp;
        for(int i=0; i<n; i++){
            int x,y;
            cin>>x>>y;
            mp[x*y]={x,y};
        }
        int ans=1;
        
        while(mp.size()>1){
            auto tag=mp.begin()->first;
            mp.erase(mp.begin());
            for(auto i:mp){
                if(tag%(i.second.second)==0 && tag/(i.second.second)<=i.second.first){
                    mp.erase(i);
                }
                else{
                    ans++;
                }
            }
        }
        if(mp.size()==1){
            ans++;
        }
        cout<<ans<<"\n";
    }
}