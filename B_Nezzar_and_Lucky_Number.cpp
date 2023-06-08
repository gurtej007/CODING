#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        ll d;
        cin>>d;
        while(q--){
            ll x;
            cin>>x;
            if(x>=(10*d)){
                cout<<"YES"<<"\n";
                
            }
            else{
                while(x>0 && x%10!=d){
                    x-=d;
                }
                if(x<0){
                    cout<<"NO"<<"\n";
                }
                else{
                    cout<<"YES"<<"\n";
                }
            }
        }
    }
}