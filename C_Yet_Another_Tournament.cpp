#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(k>=sum){
        cout<<"1\n";
        return ;
    }
    int cnt=0;
    vector<int> idx(n);
    for(int i=0;i<n;i++){
        idx[i]=i;
    }

    for(int i=n-1;i>0;i--){
      
        if(k-v[i]>=v[i-1]){
            k-=v[i];
            cnt++;
        }
        else{
            idx[i]++;
        }
    }
    if(k>=v[0]){
        cnt++;
    }
    else{
        idx[0]++;
    }
    int r=n+1;
    for(int i=0;i<n;i++){
        if(idx[i]<=cnt){
            r=n-i;
        }
    }
    cout<<r<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}