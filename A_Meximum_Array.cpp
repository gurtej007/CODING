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
        vector<int> mex(n+1,0);
        vector<int> pos(n,0);
        int x=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]==x){
                mex[v[i]]=1;
                while(mex[x]){
                    x++;
                }
            }
            else{
                mex[v[i]]=1;
            }
            pos[i]=x;
        }
        vector<int> ans;
        int i=0;
        map<int,int> mp;
        while(i<n){
            int m=pos[i];
            int x=0;
            int j=i;
            while(j<n){
                if(x==v[j]){
                    mp[x]=1;
                    while(mp.find(x)!=mp.end())
                        x++;
                }
                if(x==m){
                    ans.push_back(m);
                    break;
                }
                mp[v[j]]=1;
                j++;
            }
            mp.clear();
            i=j+1;
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}