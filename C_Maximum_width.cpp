#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<pair<int,int>> v;
    int i=0;
    int j=0;
    while(i<n && j<m){
        char x=s[i];
        if(s[i]==t[j]){
            int idx=i;
            while(s[i]==x){
                i++;
            }
            v.push_back({idx,i-1});
            j++;
        }
        else{
            i++;
        }
    }
    int ans=INT_MIN;
    j=0;
    while(j<m-1){
        if(t[j]==t[j+1]){
            ans=max(ans,v[j].second-v[j].first);
        }
        else{
            ans=max(ans,v[j+1].second-v[j].first);
        }
        j++;
    }
    cout<<ans<<"\n";
} 