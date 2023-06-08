#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        map<int,int> freq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(freq[x]==0){
                v.push_back(x);
            }
            freq[x]++;
        }
        sort(v.begin(),v.end());

        int len=0,ans=0;
        pair<int,int> p;
        int prev=v[0]-1;
        for(int i=0;i<v.size();i++){
            if(prev+1==v[i] && freq[v[i]]>=k){
                len++;
                prev=v[i];
            }
            else{
                if(len>ans){
                    p={v[i-len],v[i-1]};
                    ans=len;
                    
                }
                if(freq[v[i]]<k && prev+1!=v[i] || freq[v[i]]<k){
                    len=0;
                    if(i!=v.size()-1){
                        prev=v[i+1]-1;
                    }
                }
                else if(prev+1!=v[i]){
                    len=1;
                    prev=v[i];
                }
               
            }
        }
        if(len>ans){
            p={v[v.size()-len],v[v.size()-1]};
            ans=len;
        }
        if(p.first!=0 && p.second!=0){
            cout<<p.first<<" "<<p.second<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}