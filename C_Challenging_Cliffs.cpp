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
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int idx=1;
        int diff=v[1]-v[0];
        for(int i=2;i<n;i++){
           
            if(diff>(v[i]-v[i-1])){
                diff=v[i]-v[i-1];
                idx=i;
            }
        }
        vector<int> ans(n);
       
            ans[0]=v[idx-1];
            ans[n-1]=v[idx];
            int x=1;
            for(int i=idx+1;i<n;i++){
                ans[x++]=v[i];
            }
            for(int i=0;i<idx-1;i++){
                ans[x++]=v[i];
            }
        
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}