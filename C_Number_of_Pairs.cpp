#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i = 0; i < n; i++)
        {
            ll low=l-v[i];
            ll high=r-v[i];
            ll s=i+1;
            ll e=n-1;
            ll x=-1,y=-1;
            while(s<=e){
                int m=(s+e)/2;
                if(v[m]<l){ 
                    s=m+1;
                }
                else{
                    x=m;
                    e=m-1;
                }
            }
            s=i+1;
            e=n-1;
            while(s<=e){
                int m=(s+e)/2;
                if(v[m]<=r){
                    y=m;
                    s=m+1;

                }
                else{
                    
                    e=m-1;
                }
            }
            if( x>y ){
                continue;
            }
            if(x==-1||y==-1){
                continue;
            }
            if(x==-1){
                ans+=max(0LL,y-i);
            }
            else{
                ans+=max(0LL,y-x+1);
            }
        }
        cout<<ans<<"\n"; 
        
    }

}

