#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int xmax=0;
        int xmin=0;
        int ymax=0;
        int ymin=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            xmax=max(xmax,x);
            ymax=max(ymax,y);
            ymin=min(ymin,y);
            xmin=min(xmin,x);    
        }
        ans=ans+2*(ymax-ymin)+2*(xmax-xmin);
        cout<<ans<<"\n";
    }
}