#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        int cnt2=0;
        int cnt1=0;
        for(int i=0;i<n;i++){                                          
            cin>>v[i];
            if(v[i]==-1){
                cnt1++;
            }
            if(v[i]==-2){
                cnt2++;
            }
        }
        int z=max(cnt1,cnt2);
        vector<int> cnt(m,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]>0){
                cnt[v[i]-1]=1;
            }
        }
        for(int i=0;i<m;i++){
            ans+=cnt[i];
        }
        ans=min(m,max(ans+cnt1,ans+cnt2));
        int x=0;
        
        for(int i=0;i<m;i++){
            if(cnt[i]==1 && cnt1>0){
                ans+=min(i-x,cnt1);
                cnt1-=i-x;
                x=i;
            }
        }
        
        int y=m-1;
        for(int i=m-1;i>=0;i--){
            if(cnt[i]==1 && cnt2>0){
                ans+=min(y-i,cnt2);
                cnt2-=y-i;
                y=i;
            }
        }
        if((cnt2>0 || cnt1>0) &&  m-ans>0){
            cout<<min(max(ans,s+z),m)<<"\n"   ;
        }
        else
            cout<<min(ans,m)<<"\n";
    }
}