#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans=1e9;
        int f=0;
        if(x1+1<=n){
            f++;
        }
        if(x1-1>=1){
            f++;
        }
        if(y1+1<=m){
            f++;
        }
        if(y1-1>=1){
            f++;
        }
        int f2=0;
        if(x2+1<=n){
            f2++;
        }
        if(x2-1>=1){
            f2++;
        }
        if(y2+1<=m){
            f2++;
        }
        if(y2-1>=1){
            f2++;
        }
        cout<<min(f,f2)<<endl;
    }
}