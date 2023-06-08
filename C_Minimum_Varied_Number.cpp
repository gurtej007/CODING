#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n<10){
        cout<<n<<"\n";
        return ;
    }
    int x=n;
    int y=9;
    int ans=0;
    int z=1;
    while(n>0){
        if(n<y){
            ans=ans+z*n;
            break;
        }
        else{
            ans=ans+z*y;
            n=n-y;
            y--;
            z*=10;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}