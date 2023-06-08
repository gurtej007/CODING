#include<bits/stdc++.h>
using namespace std;
bool solve(vector<long long > req,vector<long long> v,long long int n,long long int k,long long int m){
    long long z=0;
    for(int i=0;i<n;i++){
        long long ans=max(m*req[i]-v[i],z);
        if(ans>0){
            if(ans<=k){
                k-=ans;
            }
            else return 0;
        }
    }
    return 1;
}
int main(){
    long long int n,k;
    cin>>n>>k;
    vector<long long > req(n);
    for(int i=0;i<n;i++){
        cin>>req[i];
    }
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long int l=1,r=1e14;
    while(l<=r){
        long long int m=l+(r-l)/2;
        if(solve(req,v,n,k,m)){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<r<<"\n";
}