#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<-1<<"\n";
            continue;
        }
        if(d==b){
            cout<<max(a-c,-1LL)<<"\n";
            continue;
        }
        int x=abs(d-b);
        if(a+x<c){
            cout<<"-1\n";
            continue;
        }
        cout<<abs(c-(a+x))+x<<"\n";
    }
}