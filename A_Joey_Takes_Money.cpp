#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll p=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p*=x;
        }
        cout<<(p+n-1)*2022LL<<"\n";
    }
}