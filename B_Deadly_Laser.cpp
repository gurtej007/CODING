#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    if(((n-x)>d && (y-1)>d) || ((x-1)>d && (m-y)>d )){
        cout<<(n-1)+(m-1)<<"\n";
        return ;
    }
    cout<<-1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}