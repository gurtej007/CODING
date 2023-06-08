#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n==1){
            cout<<"Bob"<<" "<<s[0]-'a'+1<<"\n";
        }
        else if(n%2==0){
            cout<<"Alice"<<" ";
            int ans=0;
            for(int i=0;i<n;i++){
                ans+=s[i]-'a'+1;
            }
            cout<<ans<<"\n";
        }
        else{
            int ans=0;
            cout<<"Alice ";
            if(s[n-1]-'a'>=s[0]-'a'){
                for(int i=1;i<n;i++){
                    ans+=s[i]-'a'+1;
                }
                cout<<ans-(s[0]-'a'+1)<<"\n";
            }
            else{
                for(int i=0;i<n-1;i++){
                    ans+=s[i]-'a'+1;
                }
                cout<<ans-(s[n-1]-'a'+1)<<"\n";
            }
        }
    }
}