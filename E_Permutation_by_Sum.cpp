#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,s;
        cin>>n>>l>>r>>s;
        int x=r-l+1;
        if(x*(x+1)/2>s || (n*(n+1)/2-(n-x)*(n-x+1)/2)<s ){
            cout<<"-1\n";
            continue;
        }
        vector<int> v(n+1,0);
        
        int mini=x*(x+1)/2;
        int maxi=n*(n+1)/2-(n-x)*(n-x+1)/2;
        int s=n-3;
        for(int i=l;i<=r;i++){
            int y=s-1;
            while(s-y<=(x-1)){
        
            }
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}