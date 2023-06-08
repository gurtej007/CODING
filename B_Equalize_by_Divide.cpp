#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i].first;
            v[i].second=i;
        }
        bool f=1;
        for(int i=1;i<n;i++){
            if(v[i].first!=v[i-1].first){
                f=0;
                break;
            }
        }
        if(f){
            cout<<"0\n";
            continue;
        }
        sort(v.begin(),v.end());
        if(v[0].first==1){
            cout<<"-1\n";
            continue;
        }
        vector<pair<ll,ll>> ans;
        while(v[n-1].first!=v[0].first){
            for(int i=1;i<n;i++){
                if(v[i].first!=v[0].first){
                    ll x=v[i].first;
                    ll y=v[0].first;
                    while(x>y){
                        if(x%y!=0){
                            x=x/y+1;
                        }
                        else{
                            x=x/y;
                        }
                        ans.push_back({v[i].second+1,v[0].second+1});
                    }
                    v[i].first=x;
                }
            }
            sort(v.begin(),v.end());
        }
        cout<<ans.size()<<"\n";
        for(auto it: ans){
            cout<<it.first<<" "<<it.second<<"\n";
        }
    }
}