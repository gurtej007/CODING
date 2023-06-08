#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll m=998244353;
// ll fact(ll cnt){

//     if(cnt==0 || cnt==1){
//         return 1LL;
//     }
//     return ((cnt)*fact(cnt-1));
// }
ll maxc(ll a,ll b){
    return log2(b/a)+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<maxc(a,b)<<" ";
        ll cnt=maxc(a,b)-1;
        ll ans=0;
        ll x=(a)*pow(2,cnt);
        ll diff=b-x;
        diff/=pow(2,cnt);
        ans+=diff+1;
        ll z=pow(2,cnt-1)*3;
        b/=z;
        ans+=((cnt)*max(b-a+1,0LL))%m;
        cout<<ans%m<<"\n";
    }
    
}