#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
         
        if(b==1){
            cout<<"NO\n";
            continue;
        }
       cout<<"YES\n";
        cout<<a<<" ";
        
            b=b*4;
            cout<<a*(b-1)<<" "<<a*b<<"\n";
        
    }
}