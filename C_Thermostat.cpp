#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b){
        cout<<0<<"\n";
        return ;
    }
    if(abs(a-b)>=x){
        cout<<1<<"\n";
        return ;
    }
    else{
        if(a>b){
            swap(a,b);
        }
        if(a+x>r && a-x<l){
            cout<<-1<<"\n";
            return ;
        }
        if(b+x<=r || a-x>=l){
            cout<<2<<"\n";
            return ;
        }
        if(a+x<=r && b-x>=l) {
            cout<<3<<"\n";
            return;
        }
        cout<<-1<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}