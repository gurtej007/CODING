#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n),cnt(500001,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    for(int i=1;i<cnt.size();i++){
        if(cnt[i]!=0){
            if(cnt[i]>=i+1){
                int y=cnt[i]/(i+1);
                cnt[i+1]+=y;
                cnt[i]-=y*(i+1);
            }
        }
    }
    bool flag=1;
    for(int i=1;i<x;i++){
        if(cnt[i]!=0){
            flag=0;
        }
    }
    if(flag){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}