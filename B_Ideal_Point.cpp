#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        vector<int> cnt(51,0);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
            for(int j=v[i].first;j<=v[i].second;j++){
                cnt[j]++;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i].first>k || v[i].second<k){
                for(int j=v[i].first;j<=v[i].second;j++){
                    cnt[j]--;
                }
            }
        }
        int ans=cnt[k];
        bool f=0;
        for(int i=0;i<51;i++){
            if(i!=k && cnt[i]>=ans){
                f=1;
                break;

            }
        }
        if(f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}