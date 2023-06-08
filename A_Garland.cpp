#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<4;i++){
            mp[s[i]]++;
        }
        if(mp.size()==4 || mp.size()==3){
            cout<<"4\n";
            continue;
        }
        if(mp.size()==1){
            cout<<"-1\n";
            continue;
        }
        if(mp.size()==2){
            for(auto it:mp){
                if(it.second==3 || it.second==1){
                    cout<<"6\n";
                    break;
                }
                else{
                    cout<<"4\n";
                    break;
                }
            }

        }
    }
}