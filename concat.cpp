#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

void createmap(vector<string> v,map<string,int> &mp){
    for(int i=0;i<v.size();i++){
        mp[v[i]]=1;
    }
}
void solve(vector<string> &v,map<string,int> &mp,vector<bool> &ans){
    for(int i=0;i<v.size();i++){
        string str=v[i];
        bool present=0;
        for(int j=0;j<str.size();j++){
            string l=str.substr(0,j);
            string r=str.substr(j);

            if(mp[l]==1 && mp[r]==1){
                ans.push_back(1);
                present=1;
                break;
            }
        } 
        if(present==0)
            ans.push_back(0);  
    }
    return ;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            v.push_back(str);
        }
        
        map<string,int> mp;
        vector<bool> ans;
        createmap(v,mp);
        solve(v,mp,ans);

        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<"\n";
    }
}
