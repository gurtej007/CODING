#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll l,r;
        cin>>n>>l>>r;
        ll x=l;
        vector<ll> ans(n,0);
        bool f=1;
        for(int i=1;i<=n;i++){
            if(l%i==0){
                ans[i-1]=l;
            }
            else{
                ll z=l%i;
                if(l+(i-z)<=r){
                    ans[i-1]=l+i-z;
                }
                else{
                    f=0;
                }
            }
        }
        if(!f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<'\n';
        }
        
    }
}