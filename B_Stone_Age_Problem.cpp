#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        bool f=0;
        ll prev=-1;
        unordered_map<int,int> mp;

        while(q--){
            int x;
            cin>>x;

            if(x==1){
                ll id,y;
                cin>>id>>y;
                if(!f){
                    cout<<sum+(y-v[id-1])<<"\n";
                    sum=sum+(y-v[id-1]);
                    v[id-1]=y;
                    
                }
                else{
                    if(!mp[id-1]){
                        cout<<sum+(y-prev)<<"\n";
                        v[id-1]=y;
                        mp[id-1]=1;
                        sum=sum+y-prev;
                    }
                    else{
                        cout<<sum+y-v[id-1]<<"\n";
                        sum=sum+(y-v[id-1]);
                        v[id-1]=y;
                    }

                }

            }
            else{
                ll y;
                cin>>y;
                f=1;
                prev=y;
                cout<<n*y<<"\n";
                sum=n*y;
                mp.clear();
            }
            
        }

    
}