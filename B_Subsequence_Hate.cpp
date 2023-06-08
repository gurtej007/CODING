#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int cnt1=0,cnt0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        int d0=0;
        int d1=0;
        int ans=1e9;
        for(int i=0;i<n;i++){
            
            if(s[i]=='0'){
                d0++;
            }
            else{
                d1++;
            }
            ans=min({ans,d0+cnt1-d1,d1+cnt0-d0});
        }
        cout<<min({ans,cnt1,cnt0})<<"\n";
    }
}