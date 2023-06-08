#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int ans=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            
        }
        if(n==1){
            cout<<v[0]<<"\n";
            continue;
        }
        bool f=0;
        for(int i=0;i<256;i++){
            vector<int> a=v;
            for(int j=0;j<n;j++){
                a[j]=(a[j]^i);
            }
            int x=0;
            for(int j=0;j<n;j++){
                x=(x^a[j]);
            }
            if(x==0){
                f=1;
                cout<<i<<"\n";
                break;
            }
        }
        if(!f){
            cout<<"-1\n";
        }
    }
}