#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll m;
        cin>>m;
        vector<ll> r(m);
        ll tot=0;
        for(int i=0;i<m;i++){
            cin>>r[i];
            tot+=r[i];
        }
        cout<<v[tot%n]<<"\n";
    }
}