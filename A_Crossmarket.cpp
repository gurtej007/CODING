#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1){
            cout<<0<<"\n";
        }
        else{
            int x=min(n,m);
            int y=max(n,m);
            cout<<y+2*(x-1)<<"\n";
        }
    }
}