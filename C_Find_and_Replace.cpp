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
        vector<int> v(26,-1);
        bool f=1;
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']!=-1){
                if((i-v[s[i]-'a'])%2==1){
                    f=0;
                    break;
                }
                
            }
            v[s[i]-'a']=i;
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}