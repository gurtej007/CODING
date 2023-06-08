#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt0=0,cnt1=0;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            if(x%2==0){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        cout<<min(cnt1,cnt0)<<"\n";
    }
}