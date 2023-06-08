#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        char p=' ';
        for(int i=0; i<n; i++){
            if(s[i]=='?'){
                if(p=='0' || p=='1')
                    s[i]=p;
                if(p==' '){
                    s[i]='0';
                }
            }
            p=s[i];

        }
        cout<<s<<"\n";
    }
}