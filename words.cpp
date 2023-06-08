#include<bits/stdc++.h>
using namespace std;

int cnt(string s){
    int len=0;
    for(int i=1;i<s.size()-1;i++){
        len++;
    }
    return len;
}
string solve(string s){
    string ans="";
    if(s.size()<=10){
        return s;
    }
    else{
        ans.push_back(s[0]);
        ans+=(to_string(cnt(s)));
        ans.push_back(s[s.size()-1]);
    }
    return ans;
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