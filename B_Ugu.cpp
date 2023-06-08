#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    for(int i=1;i<s.size();i++){
        if(s[i]-s[i-1]<0){
            return 0;
        }
    }
    return 1;

}
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    
    for(int i=0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='0'){
            ans++;
        }
    }
    cout<<max(0,2*ans-(s[n-1]=='0'))<<"\n";
    
}int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}