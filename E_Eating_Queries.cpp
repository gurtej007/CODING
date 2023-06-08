#include<bits/stdc++.h>
using namespace std;
#define inr long long

int solve(vector<int> &sum,int n,int x){
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(sum[m]>=x){
            ans=m+1;
            h=m-1;
            
        }
        else{
            l=m+1;
        }
    }
    return ans;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> sum(n);
        int s=0;
        for(int i=0;i<n;i++){
            sum[i]=v[i]+s;
            s+=v[i];
        }
        while(q--){
            int x;
            cin>>x;
            cout<<solve(sum,n,x)<<"\n";
        }
    }
}