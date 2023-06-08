#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n),pos(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            pos[i]=i+1+v[i];
            
        }
        ll cnt=0;
        sort(pos.begin(),pos.end());
        for(int i=0;i<n;i++){
            if(k>=pos[i]){
                k-=pos[i];
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<"\n";
    }
}