#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n),b(m);
        map<int,int> mp;
        vector<int> cnt(1000000);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            
        }
        sort(b.begin(),b.end(),greater<int>());
        for(auto it:mp){
            for(int i=0;i<m;i++){
                if
            }
        }
    }
}