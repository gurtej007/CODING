#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int k=x;
        vector<int> arr;
        while(k--){
            int x;
            cin>>x;
            arr.push_back(x);
            mp[x]++;
        }
        v[i]=arr;
    }
    
    for(int i=0;i<n;i++){
        bool f=0;
        for(auto it:v[i]){
            if(mp[it]==1){
                f=1;
            }
        }
        if(!f){
            cout<<"YES\n";
            return ;
        }
    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}