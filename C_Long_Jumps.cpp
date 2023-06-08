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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> arr(n,0);
        for(int i=n-1;i>=0;i--){
            arr[i]=v[i];
            if(i+v[i]<n){
                arr[i]+=arr[i+v[i]];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,arr[i]);
        }
        cout<<ans<<"\n";
    }
}