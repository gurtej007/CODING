#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        bool f=1;
        for(int i=1;i<n-1;i++){
            if(v[i]%(__gcd(v[i-1],v[i+1]))!=0){
                f=0;
            }
        }
        if(!f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}