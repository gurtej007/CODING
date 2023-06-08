#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s1,s2;
        cin>>s1>>s2;
        bool f=1;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(int i=0;i<n;i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i]){
                f=0;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i] ){
                if(n-1-i<k && i<k){
                    f=0;
                    break;
                }
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