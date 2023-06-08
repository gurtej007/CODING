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
        bool flag=1,flag2=1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                flag=0;
            }
            if(v[i-1]<v[i] && !flag){
                flag2=0;
            }
        }
        if(flag2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}