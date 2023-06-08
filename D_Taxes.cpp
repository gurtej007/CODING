#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    bool f=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            f=1;
            break;
        }
    }
    if(!f){
        cout<<"1\n";
    }
    else if(n%2==0){
        cout<<"2\n";
    }
    else{
        int x=n-2;
        bool f=0;
        
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                f=1;
                break;
            }
        }
        if(!f){
            cout<<"2\n";
        }
        else{
            cout<<"3\n";
        }
    }
}