#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int cnt=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=i){
            cnt++;
            mini=mini&i;
        }
    }
    cout<<mini<<"\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}