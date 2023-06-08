#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    cout<<abs(s[0]-'a'-(s[n-1]-'a'))<<" ";
    bool check=0;
    if(s[0]>s[n-1]){
        check=1;
        swap(s[0],s[n-1]);
    }
    vector<int> v[26];
    int st=0;
    for(int i=0;i<n;i++){
        if(s[i]>=s[0] && s[i]<=s[n-1]){
            v[s[i]-'a'].push_back(i);
            st++;
        }
    }
    if(check){
        sort(v[s[0]-'a'].begin(),v[s[0]-'a'].end(),greater<int>());
        sort(v[s[n-1]-'a'].begin(),v[s[n-1]-'a'].end(),greater<int>());
    }
    cout<<st<<"\n";
    int i=s[0]-'a',j=s[n-1]-'a';
    if(check){
        vector<int> v1;
        while(j>=i){
            for(auto it:v[j]){
                v1.push_back(it+1);
            }
            j--;
        }
        swap(v1[0],v1[v1.size()-1]);
        for(auto x:v1){
            cout<<x<<" ";
        }
        
    }
    else{
        while(i<=j){
            for(auto it:v[i]){
                cout<<it+1<<" ";
            }
            i++;
        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}