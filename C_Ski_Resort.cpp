#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        int cnt=0;
        int res=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x<=q){
                cnt++;
            }
            else{
                int v=k;
                while(v<=cnt){
                    res+=cnt-v+1;
                    v++;
                }
                cnt=0;
            }
        }
        if(cnt!=0){
            int v=k;
            while(v<=cnt){
                res+=cnt-v+1;
                v++;
            }
        }
        cout<<res<<"\n";
    }
}