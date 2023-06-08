#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==0 && v[n-1]==0){
            cout<<"YES\n";
            continue;
        }
        if(n==3){
            int x=v[0]+v[1]+v[2];
            if(x==v[0]|| x==v[1]|| x==v[2]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        if(n>4){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(v[i]==0){
                    cnt++;
                }
            }
            if(cnt>(n-2)){
                cout<<"YES\n";
            }
            else if(cnt==n-2){
                if(v[0]*-1==v[n-1]){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(v[i]==0){
                    cnt++;
                }
            }
            if(cnt>(n-2)){
                cout<<"YES\n";
            }
            else if(cnt==n-2){
                if(v[0]*-1==v[n-1]){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                bool f=0;
                for(int i=0;i<n-2;i++){
                    for(int j=i+1;j<n-1;j++){
                        for(int k=j+1;k<n;k++){
                            int x=v[i]+v[j]+v[k];
                            if(x==v[0] || x==v[1]|| x==v[2] || x==v[3]){
                                continue;
                            }
                            else{
                                f=1;
                            }
                        }
                    }
                }
                if(!f){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            
        }
    }
}