#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1]+v[i+1]){
                ans++;
                i++;
            }
            else{
                if(k==1){
                    ans++;
                    i++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}