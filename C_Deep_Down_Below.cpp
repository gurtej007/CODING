#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int maxi=-1;
            for(int j=0;j<x;j++){
                int y;
                cin>>y;     
                maxi=max(maxi,y+1LL-j);   
            }
            v[i]={maxi,maxi+x};
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<n;i++){
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        int i=0;
        int j=n-1;
        int ans=1e9;
        int id=n-1;
        while(i<=j){
            int m=i+(j-i)/2;
            bool f=1;
            for(int k=m;k<id;k++){
                if(v[k].second>=(v[k+1].first)){
                    continue;
                }
                else{
                    f=0;
                    break;
                }
            }
            if(!f){
                i=m+1;
            }
            else{
                ans=v[m].first;
                id=m;
                j=m-1;
            }
        }
        int x=0;
        for(int i=0;i<id;i++){
            x+=(v[i].second-v[i].first);
        }
        cout<<ans-x<<"\n";
    }
}