#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s;
        cin >> n >> s; 
        vector<ll> v(n);
        for (int i = 0; i<n;i++){
            cin >> v[i];
        }
        ll res = 0;
        for (int i = 1; i < n-1; i++ )
        {
            ll x = v[i];
            ll y = s*2;
            res += min(x, y)*v[i - 1] + abs(x-y)*v[n-1];
        }
        cout<<res<<"\n";
    }
}    
