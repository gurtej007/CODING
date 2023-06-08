#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=sqrt(n);
        int ans=2*x+1;
        while((x+1)*x<=n){
            ans++;
            x++;
        }
        cout<<ans<<"\n";
    }
}