#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int idx=0;
        for(int i=1;i<n;i++){
            if(s[i]<=s[0] && s[i]<=s[idx]){
                idx=i;
            }
        }
        if(idx==0){
            cout<<s<<"\n";
            continue;
        }
        char x=s[idx];
        for(int i=idx-1;i>=0;i--){
            s[i+1]=s[i];
        }
        s[0]=x;
        cout<<s<<"\n";
    }
}