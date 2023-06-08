#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    string a="";
    string b="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            if(b.size()==1){
                return "NO";
            }
            b="";
            a.push_back('a');
        }
        else{
            if(a.size()==1){
                return "NO";
            }
            a="";
            b.push_back('b');
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans=solve(s);
        cout<<ans<<"\n";
    }
}