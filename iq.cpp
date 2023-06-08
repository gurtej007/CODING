#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v,int iq,int n,vector<int> & ans){
    vector<int> good;
    vector<int> bad;
    for(int i=0;i<n;i++){
        if(v[i]>iq){
            bad.push_back(i);
        }
        else{
            good.push_back(i);
        }
    }
    int low=0;
    int high=bad.size()-1;
    int idx=-1;
    while(low<=high){
        int mid=(high+low)/2;
        int curriq=iq;
        for(int i=bad[mid];i<n;i++){
            if(v[i]>curriq){
                curriq--;
            }
        }
        if(curriq>=0){
            idx=bad[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    if(idx==-1){
        for(int i=0;i<n;i++){
            if(v[i]<=iq){
                ans[i]=1;
            }
            else{
                ans[i]=0;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(i<idx){
                if(v[i]<=iq){
                    ans[i]=1;
                }
                else{
                    ans[i]=0;
                }
            }
            else{
                ans[i]=1;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int iq;
        cin>>iq;
        cout<<"\n";
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<int> ans(n);
        solve(v,iq,n,ans);
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }

    }
}