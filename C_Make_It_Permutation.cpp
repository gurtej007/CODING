#include<bits/stdc++.h>
using namespace std;

#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> v(n+1);
        
        int ans=c*n+d;
        int x=0;
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int w=0;
        for(int i=1;i<=n;i++){
            if(v[i]==v[i-1]){
                x+=c;continue;
            }
            w++;
            ans=min(ans,c*(n-i)+(v[i]-w)*d+x);
        }
        cout<<ans<<"\n";
    }
}