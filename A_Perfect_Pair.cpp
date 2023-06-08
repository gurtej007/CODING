#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll x,y,m;
    cin>>x>>y>>m;
    if((x<=0 || y<=0) && m>0){
        cout<<"-1\n";
    }
    else if((x>=0 || y>=0) && m<0){
        cout<<"-1\n";
    }
    else{
        int sum=min(x,y);
        
        while(max(x,y)<m){
            
        }
    }
}