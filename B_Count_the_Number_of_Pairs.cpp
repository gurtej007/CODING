#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<int,int> mp;
        map<int,int> mp2;
       
        
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z')
                mp[s[i]]++;
            else if(s[i]>='A' && s[i]<='Z'){
                mp2[s[i]]++;
            }
        }
        int ans=0;
        for(auto it: mp2){
            char ch=tolower(it.first);
            while(mp.find(ch)!=mp.end() && mp[ch]>0 && mp2[it.first]>0){
                ans++;
                mp[ch]--;
                mp2[it.first]--;
            }
            while(mp2[it.first]>=2 && k>0){
                k--;
                ans++;
                mp2[it.first]-=2;
            }
        }
        for(auto it:mp){
            while(mp[it.first]>=2 && k>
            0){
                k--;
                ans++;
                mp[it.first]-=2;
            }
        }
        cout<<ans<<"\n";
    }
}