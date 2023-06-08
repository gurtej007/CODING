#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    char ch=s[n-1];
    for(int i=n-2;i>=0;i--){
        if(s[i]>ch){
            if(s[i]=='9'){
                s[i]='9';
            }
            else
                s[i]=char(int(s[i])+1);
        }
        else{
            ch=s[i];
        }
    }
    sort(s.begin(),s.end());
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    
}