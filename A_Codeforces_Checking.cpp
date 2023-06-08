#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        string s="codeforces";
        vector<bool> vis(26,0);

        for(int i=0;i<10;i++){
            vis[s[i]-'a']=1;
        } 
        if(vis[ch-'a']==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}