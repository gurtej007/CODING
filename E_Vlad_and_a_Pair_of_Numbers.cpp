#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=log2(n);
        if(n%2==1 || ((n/2+n)^(n/2))!=n){
            cout<<"-1\n";
            continue;
        }
        else{
            cout<<n/2+n<<" "<<n/2<<"\n";
        }
    }
}