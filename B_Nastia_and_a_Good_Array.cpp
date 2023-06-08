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
        int idx=-1;
        ll mini=1e9+7;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<mini){
                idx=i;
                mini=v[i];
            }
        }
        cout<<n-1<<"\n";

        for(int i=0;i<n;i++){
            if(idx!=i)
                cout<<idx+1<<" "<<i+1<<" "<<v[idx]<<" "<<v[idx]+abs(idx-i)<<"\n";
        }
        
    }
}