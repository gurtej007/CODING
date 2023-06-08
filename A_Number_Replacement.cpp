#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector<pair<bool,char>> mp(10000);
        bool flag=1;
        for(int i=0;i<n;i++){
            
            if(mp[v[i]].first==1 && mp[v[i]].second!=s[i]){
                flag=0;
                break;
            }
            else if(mp[v[i]].first==0){
                mp[v[i]]={1,s[i]};
            }
            
        }
        if(flag==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}