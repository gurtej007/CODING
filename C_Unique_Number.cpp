#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int x;
    cin>>x;
    if(x>45){
        cout<<-1<<"\n";
        return  ;
    }
    if(x<10){
        cout<<x<<"\n";
        return ;
    }
    int d=9;
    ll n=0;
    ll y=1;
    while(x>0){
        if(x<d){
            n=n+x*y;
        }
        else{
            n=n+d*y;
        }
        y*=10;
        x-=d;
        d--;
       
    }
    cout<<n<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}