#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<"\n";
        }
        else{
            bool f=0;
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    f=1;
                    if(n/i>i)
                        cout<<n/i<<" " <<n-n/i<<"\n";
                    else{
                        cout<<i<<" "<<n-i<<"\n";
                    }
                    break;
                    
                }
            }
            if(!f){
                cout<<1<<" "<<n-1<<"\n";
            }
            
        }
    }
}