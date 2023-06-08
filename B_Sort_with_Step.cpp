#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i;
        }
        
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            
            if(abs(v[i].second-i)%k==0){
                continue;
            }
            else{
                cnt++;
            }
        }
        if(cnt>2){
            cout<<"-1\n";
        }
        else{
            cout<<cnt/2<<"\n";
        }
    }
}