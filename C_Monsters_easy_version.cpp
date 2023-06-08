#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll s=1;
        ll id=-1;
        for(int i=0;i<n;i++){
            if(s==v[i]){
                s++;
            }
            if(v[i]>s){
                id=i;
                break;
            }
        }
        ll ans=0;
        if(id==-1){
            cout<<"0\n";
            continue;
        }
        for(int i=id;i<n;i++){
            if(v[i]>=s){
                ans+=v[i]-s;
                s++;
            }
            
            
        }
        cout<<ans<<endl;
    }
}