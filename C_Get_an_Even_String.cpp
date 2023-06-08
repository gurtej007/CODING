#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<int> prev(26,0);
        int len=0;
        for(int i=0;i<n;i++){
            if(prev[s[i]-'a']){
                len+=2;
                for(int j=0;j<26;j++){
                    prev[j]=0;
                }
            }
            else{
                prev[s[i]-'a']=1;
            }
        }
        cout<<n-len<<"\n";
    }
}