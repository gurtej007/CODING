#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=n/2+n%2;
        ll x=log2(n);
       
        vector<ll> v(x+1,0);
        ll z=1;
        for(int i=0;i<x;i++){
            v[i]=n/(2*z);
            z*=2;
        }
      
        
        for(int i=x-1;i>=0;i--){
            
            ans+=(i+2)*(v[i]-v[i+1]);
            
          
            
        }
        cout<<ans<<"\n";
    }
}