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
        int maxi=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);
        }
        if(n==3 || n==1){
            cout<<"YES\n";
            continue;
        }
        if(n==2){
            if(v[0]>v[1]){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
            continue;
        }
        bool f=1;
        for(int i=n-1;i>0;i-=2){
            if(v[i]<v[i-1]){
                if(i==1){
                    f=0;
                }
                else{
                    v[i-2]-=(v[i-1]-v[i]);
                }
            }
            else{
                if(i>=2){
                    v[i-2]+=(v[i]-v[i-1]);
                }
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}