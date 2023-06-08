#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<"\n";
            continue;
        }
        ll x=n/2;
        ll y=n/2+1;
        if((n+1)%100==0){
            ll a=0;
            ll b=0;
            ll z1=x;
            ll z2=y;
            while(z1!=0 && z2!=0){
                a+=(z1%10LL);
                b+=(z2%10LL);
                z1/=10LL;
                z2/=10LL;
            }
           
            ll m=(a+b)/2;
            ll s=m-b;
            ll ans=0;
            ll z=1;
            while(s>0){
                if(s>=9){
                    ans=ans+z*9;
                    s-=9;
                }
                else{
                    ans=ans+z*s;
                    s-=s;
                }
                z*=10;
            }
            cout<<y+ans<<" "<<x-ans<<"\n";
        }
        else if(n%10==9 && (n+1)%100!=0){
            if(((n+1)/2)%10==0){
                cout<<y+4<<" "<<x-4<<"\n";
            }
            else{
                cout<<x<<" "<<y<<"\n";
            }
        }
        else{
            cout<<x<<" "<<y<<"\n";
        }

    }
}