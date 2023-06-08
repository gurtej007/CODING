#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        while(n!=0){
            ans=max(ans,n%10);
            n/=10;
        }
        if(ans==0){
            cout<<1<<"\n";
        }
        else{
            cout<<ans<<"\n";
        }
    }
}