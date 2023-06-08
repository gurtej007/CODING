#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<bool> v(n+1,0);
        for(int i=1;i<=n;i++){
            if(i==1 || i==n){
                for(int j=1;j<=m;j++){
                    if(j%2==1){
                        cout<<1;
                    }
                    else{
                        cout<<0;
                    }
                }
            }
            else if(n-i>1 && i-1>1 && v[i-1]==0){
                v[i]=1;
                for(int j=1;j<=m;j++){
                    if(j==1 || j==m){
                        cout<<1;
                    }
                    else{
                        cout<<0;
                    }
                }
            }
            else{
                for(int j=1;j<=m;j++){
                    cout<<0;
                }
            }
            cout<<"\n";
        }
        cout<<'\n';
    }
}