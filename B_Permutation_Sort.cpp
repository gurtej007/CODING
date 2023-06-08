#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int mini=n+1,idx=-1;
    bool flag=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0]==1){
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                cout<<"1\n";
                return ;
            }
        }
        cout<<"0\n";
        return ;
    }
    if(v[n-1]==1){
        if(v[0]==n){
            cout<<"3\n";
            return ;
        }
        cout<<"2\n";
        return ;
    }
    int maxi=0;
    for(int i=0;i<n-1;i++){
        maxi=max(maxi,v[i]);
    }
    if(maxi>v[n-1]){
        cout<<"2\n";
    }
    else{
        cout<<"1\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}