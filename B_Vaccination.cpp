#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,d,w;
    cin>>n>>k>>d>>w;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<"1\n";
        return ;
    }

    int ans=0;
    int id=0;
    
    for(int i=0;i<n;i++){
        if(i-id+1>k || v[i]-v[id]-w>d){
            id=i;
            ans++;
        }
    }
    cout<<ans+1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}