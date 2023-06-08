#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp[v[i]]>0){
                if(mp[v[i]*k]>0){
                    mp[v[i]*k]--;
                    mp[v[i]]--;
                }
                else{
                    ans++;
                    mp[v[i]]--;
                }
            }
        }
        cout<<ans<<endl;
    }
}