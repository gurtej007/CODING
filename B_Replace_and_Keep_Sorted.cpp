#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    
        ll n,q,k;
        cin>>n>>q>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int> pos;
        for(int i=1;i<n-1;i++){
            pos[i]=(v[i+1]-v[i-1])-2;
        }
        vector<int> ans(n,0);
        for(int i=1;i<n;i++){
            int j=1;
            ll x=0;
            while(j<i){
                x+=pos[j++];
            }
            x+=(k-v[i-1]-1)+(v[1]-2);
            ans[i]=x;
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
        
            l--;
            r--;
            if(l!=r){
                
                cout<<ans[r]<<"\n";
            }
            else{
                cout<<k-1<<"\n";
            }
        }
    
}