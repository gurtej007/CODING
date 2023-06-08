#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}