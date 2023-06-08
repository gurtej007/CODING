#include<bits/stdc++.h>
using namespace std;
#define int long long 
bool f(int x,vector<int> &v){
    int cnt=1;
    int mini=v[0];
    for(int i=1;i<v.size();i++){
        if((v[i]-mini+1)/2>x){
            cnt++;
            mini=v[i];
        }
    }
    if(cnt>3){
        return 0;
    }
    return 1;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        if(mp.size()<=3){
            cout<<"0\n";
            continue;
        }
        int l=0;
        int h=1e9;
        int ans=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(f(m,v)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout<<ans<<"\n";
    }
}