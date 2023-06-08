#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int s=0;
        int prev=-1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(prev==-1 || x!=prev){
                v.push_back(x);
            }
            prev=x;
        }
        int m=v.size();
        int ans=m;
        for(int i=1;i<m-1;i++){
            
            if(v[i-1]>v[i] && v[i]>v[i+1]) ans--;
            if(v[i]>v[i-1] && v[i]<v[i+1]) ans--;
        }
        cout<<ans<<"\n";
    }
}