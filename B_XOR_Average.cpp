#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2==1){
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        return ;
    }
    for(int i=0;i<n-2;i++){
        cout<<2<<" ";
    }
    cout<<"1 3 ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}