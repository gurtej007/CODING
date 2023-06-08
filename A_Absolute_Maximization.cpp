#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=v[0];
        int res=v[0];
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            ans|=v[i];
            res&=v[i];
        }
        cout<<ans-res<<"\n";
    }
}