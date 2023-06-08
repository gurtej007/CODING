#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0,mx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans+=max(mx,v[i]);
            }
            if(s[i]=='0'||mx>v[i]){
                mx=v[i];
            }
                
            
        }
        cout<<ans<<endl;
    }
}