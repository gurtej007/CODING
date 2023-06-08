#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j%i==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}