#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll ans=a;
        ll ans1=a,ans2=a;
        if(a==0){
            cout<<1<<"\n";
        }
        else {
            ll x=min(b,c);
            ll y=max(b,c);
            ans1+=x-y;
            ans2+=y-x;
            if(min(ans1,ans2)>=d){
                cout<<ans+b+c+d<<"\n";
            }
            else{
                cout<<ans+b+c+min(ans1,ans2)+1<<"\n";
            }
        }
    }
}








