#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<int,int> mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            cout<<"YES\n";
        }
        else{
            bool f=1;
            for(int i=0;i<n;i++){
                if(s[i]!=s[i%mp.size()]){
                    f=0;
                }
            }
            if(f){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}