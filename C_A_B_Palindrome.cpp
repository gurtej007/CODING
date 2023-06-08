#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int n=s.size();
        int i=0,j=n-1;
        bool f=1;
        while(i<j){
            if(s[i]=='1' && s[j]=='1'){
                b-=2;
            }
            if(s[i]=='0' && s[j]=='0'){
                a-=2;
            }
            if(s[i]=='1' && s[j]=='0'){
                f=0;
                break;
            }
            if((s[i]=='1'||s[i]=='0') && s[j]=='?'){
                if(s[i]=='0'){
                    a-=2;
                    s[j]='0';
                }
                else{
                    b-=2;
                    s[j]='1';
                }
            }
            if((s[j]=='1'||s[j]=='0') && s[i]=='?'){
                if(s[j]=='0'){
                    a-=2;
                    s[i]='0';
                }
                else{
                    b-=2;
                    s[i]='1';
                }
            }
            i++;
            j--;
        }
        if(i==j){
            if(s[i]=='0'){
                a--;
            }
            else if(s[i]=='1'){
                b--;
            }
        }
        if(!f || (a<0) || b<0){
            cout<<"-1\n";
            continue;
        }
        i=0;
        j=n-1;
        while(i<=j){
            if( i!=j && s[i]=='?' && s[j]=='?'){
                if(a>=2){
                    s[i]='0';
                    s[j]='0';
                    a-=2;
                }
                else if(b>=2){
                    s[i]='1';
                    s[j]='1';
                    b-=2;
                }
                else{
                    f=0;
                    break;
                }
            }
            else if(i==j && s[i]=='?'){
                if(a>=1){
                    s[i]='0';
                    a-=1;
                }
                else if(b>=1){
                    s[i]='1';
                    b-=1;
                }
            }
            i++;
            j--;
        }
        i=0;
        j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                f=0;
                break;
            }
            i++;
            j--;
        }
        if(!f){
            cout<<"-1\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
}