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
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<int> arr=v;
        sort(arr.begin(),arr.end());
        int mex=0;
        for(int i=0;i<n;i++){
            if(arr[i]==mex){
                mex++;
            }
        }
        if(mex==n){
            cout<<"No\n";
            continue;
        }
        if(mex==0){
            cout<<"Yes\n";
            continue;
        }
        int id1=-1;
        for(int i=0;i<n;i++){
            if(v[i]==(mex+1)){
                id1=i;
                break;
            }
        }
        int id2=-1;
        for(int i=n-1;i>=0;i--){
            if(v[i]==(mex+1)){
                id2=i;
                break;
            }
        }
        if(id1==-1){
            cout<<"Yes\n";
            continue;
        }
        int maxi=v[id1];
        for(int i=id1;i<=id2;i++){
            v[i]=mex;
        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]==ans){
                ans++;
            }
        }
        if(ans==mex+1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}