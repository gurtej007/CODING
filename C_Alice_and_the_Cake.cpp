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
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        priority_queue<int> pq;
        pq.push(sum);
        sort(v.begin(),v.end());
        int idx=n-1;
        bool f=1;
        while(!pq.empty() && idx>=0){
            if(v[idx]==pq.top()){
                pq.pop();
                idx--;
            }
            else if(pq.top()>v[idx]){
                pq.push(pq.top()/2);
                pq.push((pq.top()+1)/2);  
                pq.pop();
            }
            else{
                f=0;
                break;
            }
        }
        if(f && idx<0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}