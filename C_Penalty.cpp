#include<bits/stdc++.h>
using namespace std;

int f(string s){
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<10;i++){
        if(i&1){
            cnt2+=s[i]-'0';
        }
        else{
            cnt1+=s[i]-'0';
        }
        if(cnt2>(cnt1+(9-i)/2) || cnt1>(cnt2+(9-i)/2+(9-i)%2)){
            return i+1;
        }
    }
    return 10;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        int n=s.size();
        string s1=s;
        string s2=s;
        for(int i=0; i<n; i++){
            if(s1[i]=='?'){
                if(i&1){
                    s1[i]='1';
                }
                else{
                    s1[i]='0';
                }
            }
        }
        for(int i=0; i<n; i++){
            if(s2[i]=='?'){
                if(i&1){
                    s2[i]='0';
                }
                else{
                    s2[i]='1';
                }
            }
        }
        cout<<min(f(s1),f(s2))<<"\n";
        
    }
}