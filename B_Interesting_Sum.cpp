#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[n-1]+v[n-2]-v[1]-v[0]<<"\n";
    }
}