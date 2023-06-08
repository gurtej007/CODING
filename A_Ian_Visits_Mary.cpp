#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(__gcd(a,b)==1){
            cout<<"1\n";
            cout<<a<<" "<<b<<"\n";
            continue;
        }
        if(a==b){
            cout<<"2\n";
            cout<<a-1<<" "<<b-2<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
        else{
            cout<<"2\n";
            int diff=min(a,b)-1;
            if(a==min(a,b)){
                cout<<"1 "<<b-diff+1<<"\n";
            }
            else{
                cout<<a-diff+1<<" "<<"1"<<"\n";
            }
            cout<<a<<" "<<b<<'\n';
        }
    }
}