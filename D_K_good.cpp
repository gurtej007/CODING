#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2){
            cout<<"2\n";
            continue;
        }
        ll x=n;
        while(n%2==0){
            n/=2;
        }
        if(n!=1){
            ll y=x/n;
            if(2*y-1<n){
                cout<<2*y<<"\n";
            }
            else
                cout<<n<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}