#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll exponentMod(ll A, ll B)
{
    // Base cases
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
 
    // If B is even
    ll y;
    if (B % 2 == 0) {
        y = exponentMod(A, B / 2);
        y = (y * y) ;
    }
 
    // If B is odd
    else {
        y = (y * exponentMod(A, B - 1));
    }
 
    return y;
}
 
void solve(){
    ll n,x;
    cin>>n>>x;
    if(x==0){
        ll y=log2(n);
        cout<<exponentMod(2,y+1)<<"\n";
        return ;
    }
    if(log2(n)!=log2(x)){
        cout<<"-1\n";
    }
    if(n==x){
        cout<<n<<"\n";
        return ;
    }
    if(x%2!=0){
        cout<<"-1\n";
        return;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}