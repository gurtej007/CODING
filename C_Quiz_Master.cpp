#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<vector<ll>> f(n);
        for(ll i=0;i<n;i++){
            ll x=v[i];
            for(int j=1;j<=sqrt(x) & j<=m;j++){
                f[i].push_back(j);
                if((x/j)!=j && (x/j)<=m){
                    f[i].push_back(x/j);
                }
            }
        }
        int res=INT_MAX;
        vector<int> cnt(m+1,0);
        int c=0;
        for(int i=0,j=0;i<n;i++){

            for(auto &it:f[i]){
                cnt[it]++;
                if(cnt[it]==1){
                    c++;
                }
            }
            while(c==m){
                res=min(res,v[i]-v[j]); 
                for(auto &it:f[j]){
                    cnt[it]--;
                    if(cnt[it]==0){
                        c--;
                    }
                }
                j++;
            }
        }
        if(res==INT_MAX){
            cout<<"-1\n";
        }
        else{
            cout<<res<<"\n";
        }
    }
}