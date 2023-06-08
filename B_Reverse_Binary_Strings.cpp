#include<bits/stdc++.h>
using namespace std;
int solve(string str,string s){
    int i=0;
    int n=s.size()-1;
    int ans=0;
    while(i<=n){
        int j=i;
        while(j<=n && s[j]!=str[j]){
            j++;
        }
        if(j!=i){
            ans++;
            i=j;
        }
        else
            i++;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string str;
        for(int i=0;i<n;i+=2){
            str+="10";
        }
        int ans=solve(str,s); 
       
        reverse(str.begin(),str.end());
        int res=solve(str,s);
        cout<<min(res,ans)<<"\n";
    }
}