#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n-1;i++){
            pq.push(v[i+1]-v[i]);
        }
        while(pq.size()>1){
            int n=pq.size();
            queue<int> q;
            int i=0;
            while(pq.size()>1){
                int x=pq.top();
                pq.pop();
                q.push(pq.top()-x);
                i++;
            }
            pq.pop();
            while(!q.empty()){
                
                pq.push(q.front());
                q.pop();
            }
        }
        cout<<pq.top()<<"\n";
    }
}