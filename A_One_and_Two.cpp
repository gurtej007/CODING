#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        ll x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                x++;
            }
            else{
                y++;
            }
        } 
        if(y%2==1){
            cout<<"-1\n";
            continue;
        }
        if(y==0){
            cout<<1<<"\n";
            continue;
        }
        ll cnt=0;
        ll ans=-1;
        for(int i=0;i<n-1;i++){
            if(v[i]==2){
                cnt++;
            }
            if(cnt==y/2){
                 ans=i+1;
                 break;

            }
        }
        cout<<ans<<"\n";
    }
}