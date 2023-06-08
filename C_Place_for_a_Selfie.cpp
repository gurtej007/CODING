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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++){
            int a,b,c;
            cin>>a>>b>>c;
            if(c<=0){
                cout<<"NO\n";
                continue;
            }
            int p=4*a*c-1;

            int h=b+ceil(sqrt(p));
            int l=b-ceil(sqrt(p));
            int lo=0,hi=n-1;
            int id1=-1;
            
            while(lo<=hi){
                int m=lo+(hi-lo)/2;
                if(v[m]>l){
                    id1=m;
                    hi=m-1;
                }
                else{
                    lo=m+1;
                }
            }
            lo=0;
            hi=n-1;
            int id2=-1;
            while(lo<=hi){
                int m=lo+(hi-lo)/2;
                if(v[m]<h){
                    id2=m;
                    lo=m+1;
                }
                else{
                    hi=m-1;
                }
            }
            if(id1!=-1 && id2!=-1){
                cout<<"YES\n";
                cout<<v[id2]<<"\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}