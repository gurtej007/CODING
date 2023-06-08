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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            if(v[i]%v[i-1]==0){
                if(v[i-1]==1){
                    v[i-1]+=1;
                    if(v[i]%v[i-1]==0){
                        v[i]+=1;
                    }
                }
                else{
                    v[i]=v[i]+1;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(v[i]%v[i-1]==0){
                v[i]+=1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}