#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll w,h,n;
        cin>>w>>h>>n;
        if(w%2==1 && h%2==1 && n!=1){
            cout<<"NO\n";
        }
        else{
            ll ar=w*h;
            ll x=1;
            while(ar%x==0){
                x*=2;
            }
            x/=2;
            if(x>=n){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }

    }
}