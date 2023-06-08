#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int i=0;
    vector<pair<int,int>> res,arr;
    for(int i=0;i<n;i++){
        arr.push_back({v1[i],v2[i]});
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i].second>arr[i+1].second){
            cout<<"-1\n";
            return ;
        }
    }   
    bool check=0;
    for(int i=0;i<n;i++){
        if(v1[i]!=arr[i].first || v2[i]!=arr[i].second){
            check=1;
            
            for(int j=i+1;j<n;j++){
                if(v1[j]==arr[i].first && v2[j]==arr[i].second){
                    swap(v1[i],v1[j]); 
                    swap(v2[i],v2[j]);
                    
                    res.push_back({i+1,j+1});
                    
                }
            }
            
        }
    }
   
    if(!check){
        cout<<0<<"\n";
        return;
    }
    else{
        cout<<res.size()<<"\n";
        for(auto it:res){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}