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
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]!=1){
            cout<<"NO\n";
            continue;
        }
        bool f=0;
        int sum=0;
        sum+=v[0];
        for(int i=1;i<n;i++){
            if(v[i]<=sum){
                sum+=v[i];
                continue;
            }
            else{
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
}
