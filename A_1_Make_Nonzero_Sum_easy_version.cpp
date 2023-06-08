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
    if(n%2==1){
        cout<<-1<<"\n";
        return ;
    }
    int i=0;
    vector<pair<ll,ll>> arr;
    while(i<n ){
        int j=i+1;
        bool f=0;
        while(v[j]==v[i] ){
            if(j-i==1){
                arr.push_back({i,j});
                f=1;
                break;
            }
            j++;
        }
        if(f==0){
            arr.push_back({i,i});
            arr.push_back({j,j});
            i+=2;
        }
        else{
            i+=2;
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