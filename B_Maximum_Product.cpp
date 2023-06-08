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
        if(v[n-1]==0){
            cout<<"0\n";
        }
        else if(v[n-1]<0 || v[0]>=0){
            int p=1;
            for(int i=n-1;i>=n-5;i--){
                p*=v[i];
            }
            cout<<p<<"\n";
        }
        else{
            int k=0;
            int res=-1e18;
            while(k<5){
                int p=1;
                for(int i=n-1;i>=n+k-5;i--){
                    p*=v[i];
                }
                for(int i=0;i<k;i++){
                    p*=v[i];
                }
                k+=2;
                res=max(res,p);
            }
            cout<<res<<"\n";
        }


    }
}