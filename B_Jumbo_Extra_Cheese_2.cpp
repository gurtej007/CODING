#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ans=0;
        ll lt=-1,br=1e9;
        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            lt=max(lt,max(a,b));
            br=min(a,b);
            ans+=2*br;
        }
        ans+=2*lt;
        cout<<ans<<"\n";
    }
}