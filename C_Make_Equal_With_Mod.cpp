#include<bits/stdc++.h>
using namespace std;
#define ll long long
/// @brief 
/// @return 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        ll o=0,e=0;
        for(int i=0; i<n;i++){
            cin>>v[i];
            if(v[i]%2){
                o++;
            }
            else{
                e++;
            }
        }
        if(o==n || e==n){
            cout<<"YES\n";
            continue;
        }
        sort(v.begin(),v.end());
        if(v[0]>1){
            cout<<"YES\n";
            continue;
        }
        if(v[0]==1){
            bool f=0;
            for(int i=1;i<n;i++){
                if(v[i]-v[i-1]==1){
                    f=1;
                    break;   
                }
            }
            if(f){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        if(v[0]==0){
            bool f=0;
            for(int i=0;i<n;i++){
                if(v[i]==1){
                    cout<<"NO\n";
                    f=1;
                    break;
                }
            }
            if(!f){
                cout<<"YES\n";
            }
        }
    }
}