#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]<0){
            cout<<v[0]<<"\n";
        }
        else{
            cout<<v[n-1]<<"\n";
        }
    }
}