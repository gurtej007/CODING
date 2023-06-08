#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x=abs(n),y=abs(m);
        int ans=0;
        ans+=(2*min(x,y));
        
        int x1=x-min(x,y);
        int y1=y-min(x,y);
        ans+=max((2*max(x1,y1)-1),0);
        cout<<ans<<endl;
    }
}