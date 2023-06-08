#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        if(v[n-1]==1){
            cout<<"NO\n";
            continue;
        }
        vector<int> ans(n,0);
        int idx=n-1;
        for(int i=n-2;i>=0;i--){
            if(v[i]==1){
                ans[idx--]=i+1;
                while(i>=0 && v[i]!=0){
                    i--;
                }
                ans[idx--]=i+1;
            }
            
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}