#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+2);
        for(int i=0; i<n+2; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=v[i];
        }
        if(sum==v[n]){
            for(int i=0; i<n; i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
            continue;
        }
        sum+=v[n];
        int id=-1;
        for(int i=0; i<=n; i++){
            if((sum-v[i])==v[n+1]){
                id=i;
                break;
            }
        }
        if(id==-1){
            cout<<id<<"\n";
            continue;
        }
        for(int i=0;i<=n;i++){
            if(id!=i){
                cout<<v[i]<<" ";
            }
        }
        cout<<"\n";
    }
}