#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s+=s;
        int n=s.size();
        int len=0;
        int ans=0;
        if(n/2==1){
            if(s=="00"){
                cout<<"0\n";
            }
            else{
                cout<<"1\n";
            }
            continue;
        }
        for(int i=0;i<n;i++){
            while(i<n && s[i]=='1'){
                len++;
                i++;
            }
            ans=max(ans,len);
            len=0;
        }
        if(ans==0){
            cout<<"0\n";
            continue;
        }
        if(ans==1){
            cout<<"1\n";
            continue;
        }
        if(ans==n){
            cout<<n/2*n/2<<"\n";
            continue;
        }
        else{
            cout<<(ans+1)*(ans+1)/4<<"\n";
        }
    }
}