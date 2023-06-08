#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n;
    cin>>n;

    vector<ll> v(2*n);
    map<ll,ll> mp;

    for(int i=0;i<2*n;i++){
        cin>>v[i];
        
        mp[v[i]]++;
    }
    if(mp.size()>n){
        // cout<<"2"<<n;
        cout<<"NO"<<"\n";
        return ;
    }
    for(int i=0;i<2*n;i++){
        if(v[i]%2!=0){
            cout<<"NO"<<"\n";return;
        }
    }
    sort(v.begin()+1,v.end());
    ll d=0,x=0;
    for(int i=2*n-1;i>=0;i-=2){
        if((v[i]-d)<=0 || (v[i]-d)%2!=0 || (v[i]-d)%(n-x)!=0 || v[i]=
        =v[i-2]){
            // cout<<"3"<<n;
            cout<<"NO"<<"\n";
            return ;
        }   
        d+=(v[i]-d)/(n-x);
        x++;
    }
    
    cout<<"YES"<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}