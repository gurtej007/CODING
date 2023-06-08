#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k!=0){
            cout<<"1\n"<<n<<"\n";
        }
        else{
            cout<<"2\n";
            cout<<"1 "<<n-1<<"\n";
        }
    }
}