#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n-1;i++){
            if(s1[i]==s1[i+1]){
                cnt1++;
            }
        }
        for(int i=0;i<m-1;i++){
            if(s2[i]==s2[i+1]){
                cnt2++;
            }
        }
        if(cnt1+cnt2>=2){
            cout<<"NO\n";
            continue;
        }
        if(cnt1+cnt2==0){
            cout<<"YES\n";
            continue;
        }
        if(cnt1+cnt2==1){
            if(s1[n-1]!=s2[m-1]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}