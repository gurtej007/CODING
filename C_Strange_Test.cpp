#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        int ans=1e9;
        for(int i=0;i<=b;i++){
            if(((i)|b)==b){
                ans=min(ans,abs(a-i)+(i!=b));
            }
        }
        cout<<ans<<"\n";
    }
}