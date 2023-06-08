#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int idx;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==n){
                idx=i;
            }
        }
        vector<int> arr=v;
        sort(arr.begin(), arr.end());
        vector<int> ans(n);
        ans[0]=0;
        ans[n-1]=(idx+1)%n;
        int i=n-2;
        while(i>0){
            int x=ans[i+1];
            vector<int> v1(n);
            int idx=0;
            for(int j=x;j<=i+1;j++){
                v1[idx++]=v[j];
            }
            for(int j=0;j<x;j++){
                v1[idx++]=v[j];
            }
            // for(int j=0;j<n;j++){
            //     cout<<v1[j]<<" ";
            // }
            // cout<<"\n";
            int id1,id2;
            for(int j=0;j<n;j++){
                if(arr[j]==i+1){
                    id1=j;
                }
                if(v1[j]==i+1){
                    id2=j;
                }
            }
            // cout<<id1<<" "<<id2<<endl;
            ans[i]=(i+1-(id1-id2))%(i+1);
            v=v1;
            i--;
        }  
        for(int j=0;j<n;j++){
            cout<<ans[j]<<" ";
        }
        cout<<"\n";
    }
}