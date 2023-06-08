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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            while(v[i]%2==0){
                v[i]/=2;
                mp[2]++;
            }
            for(int j=3;j*j<=v[i];j+=2){
                while(v[i]%j==0){
                    v[i]/=j;
                    mp[j]++;
                }
            }
            if(v[i]>2){
                mp[v[i]]++;
            }
        }
        int ans=0;
        int rem=0;
        for(auto it:mp){
            ans+=(it.second)/2;
            rem+=it.second%2;
        }

        cout<<ans+rem/3<<"\n";
    }
}