#include<bits/stdc++.h>
using namespace std;
bool f(vector<int> v,int idx,int n){
    if(idx==n){
        return 1;
    }
    if(idx>n){
        return 0;
    }
    if(idx-v[idx]>=0){
        idx+=1;
    }
    bool pick;
    if(idx+v[idx]<n){
        pick=f(v,idx+v[idx]+1,n);
    }
    bool notpick=f(v,idx+1,n);
}
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i]; 
    }
    f(v,0,n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}