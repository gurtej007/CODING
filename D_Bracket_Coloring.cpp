#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int o=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                o++;
            }
            else{
                c++;
            }
        }
        vector<int> v;
        int ans=1;
        if(o!=c){
            cout<<"-1\n";
        }
        else{
            
            c=0;
            
            for(int i=0;i<n;i++){
                int j=i+1;
                while(s[j]==s[i]){
                    c++;
                    j++;
                    v.push_back(ans);
                }
                i=j-1;
            }

        }
        cout<<ans<<"\n";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}