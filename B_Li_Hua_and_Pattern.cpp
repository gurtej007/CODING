#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        int i=0;
        int j=n-1;
        int req=0;
        bool f=1;
        while(i<j){
            for(int k=0;k<n;k++){
                if(v[i][k]!=v[j][n-1-k]){
                    req++;
                }
            }
            
            if(req>k){
               
                cout<<"NO\n";
                f=0;
                break;
            }
            i++;j--;
        }
        if(f && n%2==1){
            for(int k=0;k<n/2;k++){
                if(v[n/2][k]!=v[n/2][n-1-k]){
                    req++;
                }
            }
            if(req>k){
               
                cout<<"NO\n";
                f=0;
            }
        }
        if(f){
            if(req==k){
                cout<<"YES\n";
            }
            else{
                if((k-(req))%2==0 || n%2==1){
                    cout<<"YES\n";
                    continue;
                }
                cout<<"NO\n";
            }
        }
    }

}