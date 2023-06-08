#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool check=1;
    int id1=0;
    int id2=n-1;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        if(check){
            arr[i]=v[id1];
            id1++;
        }
        else{
            arr[i]=v[id2];
            id2--;
        }
        check=!check;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}