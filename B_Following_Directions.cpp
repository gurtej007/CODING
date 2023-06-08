#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        cin>>s;
        int x=0;bool f=0;
        int y=0;
        for(int i=0;i<n;i++){  
            if(x==1 && y==1){
                f=1;
            } 
            if(s[i]=='U'){
                y++;
            }
            else if(s[i]=='R'){
                x++;
            }
            else if(s[i]=='D'){
                y--;
            }
            else{
                x--;
            }
        }
        if(x==1 && y==1){
            f=1;
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}