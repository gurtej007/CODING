#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll d1=0,d2=0;
        ll j=1;
        ll maxi=-1;
        while(n*j>pow(2,j)-1){
            if((n*j-pow(2,j)+1)>maxi){
                d2++;
                maxi=n*j-pow(2,j)+1;
            }
            j++;
        }
        cout<<j-1<<" "<<d2<<"\n";
    }
}