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
        vector<int> f(26,0);
        for(int i=0;i<n;i++){
            f[s[i]-'a']++;
        }
        sort(f.begin(),f.end(),greater<int>());
        if(n%2==1 || f[0]>n/2){
            cout<<"-1\n";
            continue;
        }
        for(int i=0;i<26;i++){
            f[s[i]-'a']=0;
        }
        int i=0;int j=n-1;
        int cnt=0;
        while(i<j){
            if(s[i]==s[j]){
                cnt++;
                f[s[i]-'a']++;
            }
            i++;
            j--;
        }
        if(cnt==0){
            cout<<cnt<<"\n";
        }
        else{
            sort(f.begin(),f.end(),greater<int>());
            if(f[0]<=cnt/2 && cnt>3){
                cout<<cnt/2<<"\n";
            }
            else
                cout<<cnt/2+1<<"\n";
        }
    }
}