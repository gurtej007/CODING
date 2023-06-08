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
        bool f=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                f=1;
            }
        }
        if(f){
            cout<<"Yes\n";
            continue;
        }
        int gcd=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                gcd=min(gcd,__gcd(v[i],v[j]));
            }
        }
        if(gcd<=2){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}