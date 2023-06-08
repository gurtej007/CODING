#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> left(n),right(n);
    left[0]=v[0];
    int maxi=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>maxi){
            left[i]=v[i];
            maxi=v[i];
        }
        else{
            left[i]=maxi;
        }
    }
    right[n-1]=v[n-1];
    int mini=v[n-1];
    for(int i=n-2;i>=0;i--){
        if(v[i]<mini){
            right[i]=v[i];
            mini=v[i];
        }
        else{
            right[i]=mini;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==n-1 || left[i]<=right[i+1]){
            ans++;
        }
    }
   
    cout<<ans<<"\n";
}