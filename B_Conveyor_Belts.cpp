#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y,fx,fy;
        cin>>n>>x>>y>>fx>>fy;
        x--; y--;
        x=min(x,n-x-1);
        y=min(y,n-y-1);
        int a1=min(x,y);
        fx--;fy--;
        fx=min(fx,n-fx-1);
        fy=min(fy,n-fy-1);
        int a2=min(fx,fy);
        cout<<abs(a2-a1)<<"\n";
    }
}