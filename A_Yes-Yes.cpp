#include<bits/stdc++.h>
using namespace std;
void solve(){
        string s;
        cin>>s;
        int n=s.size();
        string str="";
        for(int i=0;i<20;i++){
            str+="Yes";
        }
        for(int i=0;i<str.size()-1;i++){
            for(int j=i;j<str.size();j++){
                // cout<<str.substr(i,j-i+1)<<" " ;
                if(str.substr(i,j-i+1)==s){
                    cout<<"YES"<<"\n";
                    return ;
                }
            }
        }
        cout<<"NO"<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}