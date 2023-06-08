#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n-1);
        for(int i=0; i<n-1; i++){
            cin>>v[i];
        }
        int id=n-2;
        vector<int> ans(n,0);
        for(int i=0;i<n-1;i++){
            if(i==0){
                cout<<v[i]<<" ";
            }
            else{
                cout<<min(v[i],v[i-1])<<" ";
            }
            if(i==n-2){
                cout<<v[i]<<" ";
            }
        }

        cout<<"\n";
    }    
}