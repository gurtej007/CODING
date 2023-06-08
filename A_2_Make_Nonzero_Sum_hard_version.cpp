#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int i=0;
    vector<pair<ll,ll>> arr;
    while(i<n){
        int j=i+1;
        if(v[i]==-1 && v[j]==1 || v[i]==1 && v[j]==-1){
            arr.push_back({i,i});
            if(j<n){
                arr.push_back({j,j});
            }
            i+=2;
        }
        else if(v[i]==0){
            
            while(v[j]!=0){
                j++;
            }
            arr.push_back({i,j});
            i=j+1;
        }

    }
    
    cout<<arr.size()<<"\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i].first+1<<" "<<arr[i].second+1<<"\n";
    }

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}