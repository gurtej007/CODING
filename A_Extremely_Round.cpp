#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<=10){
            cout<<n<<"\n";
        }

        else{
            ll curr=10;
            ll ans=10;
            while(curr*10<=n){
                ans+=9;
                curr*=10;
            }
            int i=2;
            while(curr*i<=n){
                ans+=1;
                i++;
            }
            cout<<ans<<"\n";
        }
    }
}