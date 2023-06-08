#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt=0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        
        ll pos=-1;
        for(ll i=0;i<n;i++){
            if(v[i]>0){
                pos=i;break;
            }
        }
        if(pos==-1|| pos==n-1){
            cout<<"0"<<"\n";
        }
        else{
            for(int i=pos;i<n-1;i++){
                cnt+=v[i];
                if(v[i]==0){
                    cnt++;
                }
            }
            cout<<cnt<<"\n";
        }
    }
}