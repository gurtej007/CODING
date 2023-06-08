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
        map<char,int> mp;
        map<char,int> mp1;
        vector<int> v(n);
        vector<int> v1(n);
        int res=0;
        int ans=0;
        bool f=0;
        set<char> st;  
        int j=0;
        int x=0;
        for(int i=0;i<n;i++){
            if(mp[s[i]]!=1){
                v[i]=++x;
                mp[s[i]]=1;
            }
            else{
                v[i]=x;
            }
        }
        mp.clear();
        int y=0;
        for(int i=n-1;i>=0;i--){
            if(mp[s[i]]!=1){
                v1[i]=++y;
                mp[s[i]]=1;
            }
            else{
                v1[i]=y;
            }
        }  
     
        for(int i=0;i<n-1;i++){
            ans=max(ans,v[i]+v1[i+1]);
        }
        
        cout<<ans<<"\n";
    }
}