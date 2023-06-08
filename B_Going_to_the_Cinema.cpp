#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> cnt(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    sort(v.begin(),v.end());
    int sum=0;
    int ans=0;
    if(cnt[0]==0){
        ans=2;
    }
    else{
        ans=1;
    }
    for(int i=0;i<n-1;i++){
        sum++;
        if(v[i]<sum && v[i+1]>=sum+1){
            ans++;
        }
        
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}