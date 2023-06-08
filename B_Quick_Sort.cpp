#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    bool f=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=i+1){
            f=1;
        }
    }
    if(!f){
        cout<<"0\n";
        return ;
    }
    int x=0;
    int s=1;
    for(int i=0;i<n;i++){
        if(v[i]==s){
            x++;
            s++;
        }
    }
    int rem=n-x;
    if(rem%k==0){
        cout<<rem/k<<"\n";
    }
    else{
        cout<<rem/k+1<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}