#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<ll,bool> vis;
        for(int i=n-1;i>=0;i--){
            if(v[i]<i+1){
                int x=v[i]+2;
                if()
            }
        }
    }
}