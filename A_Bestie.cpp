#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int gcd=v[0];
    for(int i=1;i<n;i++){
        gcd=__gcd(gcd,v[i]);
    }
    if(gcd==1){
        cout<<0<<"\n";
        return ;
    }
    
    int ans=0;
    
    if(__gcd(gcd,__gcd(v[n-1],n))==1){
        ans+=1;
    }
    else if(__gcd(gcd,__gcd(v[n-2],n-1))==1){
        ans+=2;
    }
    else{
        ans+=3;
    }
    
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}