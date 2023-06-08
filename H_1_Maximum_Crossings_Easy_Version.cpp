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
        vector<int> pos(n+1,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=v[i];j<=n;j++){
                ans+=pos[j];
            }
            pos[v[i]]++;
        }
        cout<<ans<<"\n";
    }
}