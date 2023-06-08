#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll x=(n%11)*111;
       n=n-x;
       if(n>=0 && n%11==0){
        cout<<"Yes\n";
       }
       else{
        cout<<"No\n";
       }
    }
}