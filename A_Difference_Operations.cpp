#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll
         gcd=v[0];
        for(int i=1;i<n;i++){
            gcd=__gcd(gcd,v[i]);
        }
        if(gcd==v[0]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}