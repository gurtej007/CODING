#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=n/k;
        if(n%k!=0){
            ans++;
        }
        int x=(n-1)/k;
        if((n-1)%k!=0){
            x++;
        }
        if(x==ans)   n m {
            ans++;
        }
        cout<<ans<<"\n";
    }
}