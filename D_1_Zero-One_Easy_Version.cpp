#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n,x,y;
    cin >> n >> x >> y;
    string a,b;
    cin>>a>>b;
    vector<ll> diff;
    if(a==b){
        cout<<0<<"\n";
        return ;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            diff.push_back(i);
        }
    }
    if(diff.size()%2==1){
        cout<<-1<<"\n";
        return ;
    }
    if(diff.size()==2 && diff[0]+1==diff[1]){
        cout<<min(x,2*y)<<"\n";
        return ;
    }
    cout<<y*(diff.size()/2)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}