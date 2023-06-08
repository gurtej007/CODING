#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n*m);
        for (int i = 0; i < n*m; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int x=v[n*m-1]-v[0];
        cout<<x*(n*m-min(m,n))+(min(m,n)-1)*(max(v[n*m-1]-v[1],v[n*m-2]-v[0]))<<"\n";
    }
    
}