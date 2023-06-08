#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p;
        cin>>p;
        int n=s.size();
        int sum=0;
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            sum+=(s[i]-'a')+1;
            v[s[i]-'a']++;
        }
        if(p>=sum){
            cout<<s<<"\n";
        }
        else{
            bool f=0;
            for(int i=25;i>=0;i--){
                while(v[i]>0){
                    if((sum-(i+1))<=p){
                        v[i]--;
                        f=1;
                        break;
                    }
                    sum-=(i+1);
                    v[i]--;
                }
                if(f){
                    break;
                }
            }
            string str="";
            for(int i=0;i<n;i++){
                if(v[s[i]-'a']>0){
                    v[s[i]-'a']--;
                    str+=s[i];
                }
                
            }
            cout<<str<<"\n";
        }
        
    }
}