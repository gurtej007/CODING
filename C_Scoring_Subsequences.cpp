#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<int> ans(n);
        ans[0]=1;
        ll p=v[0];
        int j=0;
        for(int i=1;i<n;i++){

            while(j<i && v[j]<i-j+1){
                j++;
            }

            ans[i]=i-j+1;
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}