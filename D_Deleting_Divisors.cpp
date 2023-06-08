#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==1){
            cout<<"Bob\n";
            continue;
        }
        ll cnt=0;
        while(!(n&1)){
            n/=2;
            cnt++;
        }
        if(n==1){
            if(cnt%2==1){
                cout<<"Bob\n";
            }
            else{
                cout<<"Alice\n";
            }
        }
        else{
            cout<<"Alice\n";
        }
    }
}