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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=1;
        int idx=-1;
        int cnt=0;
        int diff=INT_MAX;
        for(int i=1;i<n;i++){
            if(v[i]>0){
                idx=i;
                break;
            }
            
            diff=min(diff,v[i]-v[i-1]);
            
           
            ans++;
        }
        if(idx==-1){
            cout<<ans<<"\n";
        }
        else{
            if(diff==INT_MAX  ){
                if(v[idx-1]<=0)
                    ans++;
            }
            else if(diff>=v[idx]){
                ans++;
            }
            cout<<ans<<"\n";
            
        }
    }

}