#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]+=min(a[i],b[i]);
            a[i]-=min(a[i],b[i]);
        }
        int sum=0;
        // vector<int> v(n);
        // for(int i=n-1;i>0;i--){
        //     v[i]=sum+b[i];
        //     sum+=b[i];
        // }
        for(int i=n-1;i>0;i--){
          
            for(int j=i;j<n;j++){
                ans[j]+=min(a[i-1],b[j]);
                a[i-1]-=min(a[i-1],b[j]);
            }

        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}