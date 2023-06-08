#include<bits/stdc++.h>
using namespace std;

string solve(vector<int> &keys,int k1){
    if(keys[k1-1]==0 || keys[keys[k1-1]]==0){
        return "NO";
    }
    else{
        return "YES";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k1;
        cin>>k1;
        vector<int> keys(3);
        for(int i=0;i<3;i++){
            cin>>keys[i];
        }
        string ans=solve(keys,k1);
        cout<<ans<<"\n";
    }
}