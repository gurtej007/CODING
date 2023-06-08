#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int maxi=0,id=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]>maxi){
                maxi=v[i];
                id=i;
            }
        }
        vector<int> ans;
        if(id!=0 && id!=n-1){
            ans.push_back(maxi);
            for(int i=id+1;i<n;i++){
                ans.push_back(v[i]);
            }
            ans.push_back(v[id-1]);
            int x=0;
            for(int i=id-2;i>0;i--){
                if(v[i]>v[0]){
                    ans.push_back(v[i]);
                }
                else{
                    x=i;
                    break;
                }
            }
            for(int i=0;i<=x;i++){
                ans.push_back(v[i]);
            }
        }
        else if(id==0){
            int m=0,idx=0;
            for(int i=1;i<n;i++){
                if(v[i]>m){
                    m=v[i];idx=i;
                }
            }
            for(int i=idx;i<n;i++){
                ans.push_back(v[i]);
            }
            if(idx==n-1){
                for(int i=0;i<=idx-1;i++)
                    ans.push_back(v[i]);
            }
            else{
                ans.push_back(v[idx-1]);
                for(int i=0;i<=idx-2;i++)
                    ans.push_back(v[i]);
            }
        }
        else{
            int x;
            for(int i=id;i>0;i--){
                if(v[i]<v[0]){
                    x=i;
                    break;
                }
                else{
                    ans.push_back(v[i]);
                }
            }
            for(int i=0;i<=x;i++){
                ans.push_back(v[i]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}