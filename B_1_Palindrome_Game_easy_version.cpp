#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        if(cnt1==n){
            cout<<"DRAW\n";
            continue;
        }
        if(cnt0==1){
            cout<<"BOB\n";
            continue;
        }
        if(cnt0%2==0){
            cout<<"BOB\n";
            continue;
        }
        else{
            cout<<"ALICE\n";
        }
      
    }
}