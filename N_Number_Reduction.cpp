#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    string s="";
    while(n>0){
        s+=(n%10+'0');
        n/=10;
    }
    reverse(s.begin(),s.end());
    while(k>0){
        int idx=-1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>s[i+1]){
                if(i==0 && s[i+1]=='0'){
                    continue;
                }
                idx=i;
                break;
            }
        }
        if(idx==-1){
            s.erase(s.size()-1,1);
        }
        else
            s.erase(idx,1);
        // cout<<s<<"\n";
        k--;
    }
    cout<<stoi(s)<<"\n";

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}