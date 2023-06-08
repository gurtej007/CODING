#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(s[0]==s[n-1]){
            cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<"\n";
        }
        else if(s[0]=='b'){
            bool f=0;
            for(int i=1;i<n-1;i++){
                if(s[i]=='a'){
                    cout<<s.substr(0,i)<<" "<<s[i]<<" "<<s.substr(i+1)<<"\n";
                    f=1;
                    break;
                }
            }
            if(!f){
                cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2)<<"\n";
            }
        }
        else{
            bool f=0;
            for(int i=1;i<n-1;i++){
                if(s[i]=='b'){
                    cout<<s.substr(0,i)<<" "<<s.substr(i,n-i-1)<<" "<<s[n-1]<<"\n";
                    f=1;
                    break;
                }
                
            }
            if(!f){
                cout<<s.substr(0,n-2)<<" "<<s[n-2]<<" "<<s[n-1]<<"\n";
            }
        }
    }
}