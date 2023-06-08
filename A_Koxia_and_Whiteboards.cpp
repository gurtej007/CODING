#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
    
            ll ans=0;
            priority_queue<int, vector<int>, greater<int> > pq;
         
            for(int i=0;i<n;i++){
                pq.push(a[i]);
            }
            for(int i=0;i<m;i++){
                pq.pop();
                pq.push(b[i]);
            }
            while(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
            cout<<ans<<"\n";
    
    }
}