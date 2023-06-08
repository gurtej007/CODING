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
        int i=0;
        int j=n-1;
        int x=0;
        int cnt=0;
        while(s[i]==s[j]){
            i++;
            j--;
        }
        while(i<=j){
            if(s[i]!=s[j]){
                cnt++;
            }
            else{
                break;
            }
            i++;
            j--;
        }
        i++;
        j--;
        while(s[i]==s[j]){
            i++;j--;
        }
        if(i>j){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}