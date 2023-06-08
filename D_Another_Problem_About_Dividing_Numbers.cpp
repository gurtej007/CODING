#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        if(k==1){
            if(b%a==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        while(b!=1 && k>1){
            if(b%2==0){
                b/=2;
            }
            
        }
    }
}