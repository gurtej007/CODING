#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        priority_queue<ll> pq;
        ll ans=0;
        for(int i=0;i<n;i++){
            pq.push(v[i]);
            if(v[i]==0){
                ans+=pq.top();
                pq.pop();
            }
        }
        cout<<ans<<"\n";
    }
}