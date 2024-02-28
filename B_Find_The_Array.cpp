#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t=1;
    
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
         priority_queue<int, vector<int>, greater<int> > pq;
        pq.push({0,0});
        int time=0;
        while(!pq.empty()){
            int l=pq.size();

            for(int j=0;j<l;j++){
                auto f=pq.front();
                pq.pop();
                int row=f.first,col=f.second;
                vector<int> t(n,0);
                bool fl=0;
                for(int i=0;i<n;i++){
                    t[i]=v[(i+time)%n][col];
                    
                    if(t[i]==1){
                        if((i+time)%n==row){
                             fl=1;
                             break;
                        }
                    }

                }
                if(fl){
                    continue;
                }
                if((row-1+n)%n==
                
            }
        }
    }
}
