#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    v[0]=1;
    int d=1;
    int sum=0;
    sum+=v[0];
    if(n==k){
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
    }

    else{
        for(int i=1;i<n;i++){
            
            if( v[i-1]+d+n-i<=k+1){
                v[i]=v[i-1]+d;
                sum+=v[i];
                d++;
            }
            
            else{
                v[i]=v[i-1]+1;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}