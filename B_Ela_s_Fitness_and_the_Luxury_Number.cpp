#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll y=sqrt(a);
        ll x=sqrt(b);
        ll ans=(x-y)*3+1;
        if((a-y*y)%y==0){
            ans-=(a-y*y)/y;
        }
        else{
            ans-=(((a-y*y)/y)+1);
        }
        
        ans+=(b-x*x)/x;
        cout<<ans<<endl;
    }
}