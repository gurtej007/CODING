#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> v(k);
        for(ll i=0;i<k;i++){
            cin>>v[i];
        }
        ll s=n*m-2;
        ll e=k;
        vector<ll> vis(k+1);
        bool flag=1;
        for(ll i=0;i<k;i++){
            while(vis[e]==1){
                e--;
                s++;
            }
            int x=v[i];
            vis[x]=1;
            if(e!=x && s>0){
                s--;
            }
            else if(e==x && s>1) {
                e--;      
            }
            else{
                
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YA"<<"\n";
        }
        else{
            cout<<"TIDAK"<<"\n";
        }

    }
}
