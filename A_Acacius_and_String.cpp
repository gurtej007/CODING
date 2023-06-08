#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str="abacaba";
    for(int i=0;i<n-6;i++){
        string t=s;
        for(int j=0;j<7;j++){
            if(t[i+j]=='?'){
                t[i+j]=str[j];
            }
        }
        for(int k=0;k<n;k++){
            if(t[k]=='?'){
                t[k]='d';
            }
        }
        int ct=0;
        for(int k=0;k<n-6;k++){
            if(t.substr(k,7)==str)
                ct++;
        }
        if(ct==1){
            cout<<"Yes"<<"\n"<<t<<"\n";
            return ;
        }
    }
    cout<<"No"<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}