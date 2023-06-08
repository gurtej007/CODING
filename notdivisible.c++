#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k){
    int s=1;
    long long int e=n*k;
    long long int m=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        int x=m-m/n;
        if(x>k){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
}