#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && c==0){
            cout<<"0"<<"\n";
        }
        else if(a==0 || c==0){
            cout<<"1\"<<"\n";
        }
        else{
            ll lcm=b*d/__gcd(b,d);
            ll x=a*(lcm/b);ll y=c*(lcm/d);
            if(x==y){
                cout<<0<<"\n";
            }
            else{
                if(x%y==0 || y%x==0){
                    cout<<1<<"\n";
                }
                else{
                    cout<<2<<"\n";
                }
            }
        }
    }
}