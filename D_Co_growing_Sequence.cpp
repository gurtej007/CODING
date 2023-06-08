#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<int> ans(n);
        ans[0]=0;
        for(int i=1;i<n;i++){
            if((v[i]&v[i-1])!=v[i-1]){
                int x=v[i]&v[i-1];
             
                ans[i]=v[i-1]-(v[i]&v[i-1]);
                v[i]=v[i]^ans[i];
            }
            else{
                ans[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}