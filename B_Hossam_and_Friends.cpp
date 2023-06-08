#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<n;i++){
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}