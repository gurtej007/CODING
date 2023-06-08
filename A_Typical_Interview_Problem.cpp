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
        string s1="FBFFBFFBFBFFBFFBFBFFBFFB";
        bool f=0;
        for(int i=0;i<24;i++){
            string s2="";
            for(int j=i;j<24;j++){
                s2.push_back(s1[j]);
                if(s2==s){
                    f=1;
                    cout<<"YES\n";
                    break;
                }
            }
            if(f){
                break;
            }
        }
        if(!f){
            cout<<"NO\n";
        }
    }
}