#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        
        for(int i=0; i<n; i++){
            cin>>v[i];
           
        }
        bool f=0;
        sort(v.begin(), v.end());
        
        if(n%2==1){
            cout<<"NO\n";
            continue;
        }
        
        
        for(int i=1;i<n/2;i++){
            if(v[i]==v[i+n/2-1]){
                
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<n/2;i++){
                cout<<v[i]<<" "<<v[i+n/2]<<" ";
            }
            cout<<"\n";
        }
    }
}