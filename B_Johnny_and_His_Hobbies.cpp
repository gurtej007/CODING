#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]=1;
        }
        bool f1=0;
        for(int i=1;i<=1024;i++){
            bool f=1;
            for(int j=0;j<n;j++){
                int x=v[j]^i;
                if(mp[x]!=1){
                    f=0;
                    break;
                }
            }
            if(f){
                cout<<i<<"\n";
                f1=1;
                break;
            }
        }
        if(!f1){
            cout<<"-1\n";
        }
    }
}