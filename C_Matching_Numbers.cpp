#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<"No\n";
            continue;
        }
        vector<ll> v(2*n);
        for(ll i=0;i<2*n;i++){
            v[i]=i+1;
        }
        cout<<"Yes\n";
        vector<ll> vis(2*n,0);
        int i=n-1,j=n;
        while(i>=0 && j<2*n){
            cout<<v[i]<<" "<<v[j]<<endl;
            i--; j+=2;
        }
        j=2*n-2;
        i=0;
        while(i<n-1 && j>n){
            cout<<v[i]<<" "<<v[j]<<"\n";
            i++; j-=2;
        }
    }
}