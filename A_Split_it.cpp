#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if((k+1)>n/2+n%2){
            cout<<"NO\n";
            continue;
        }
        if(k==0){
            cout<<"YES\n";
            continue;
        }
        int i=0,j=n-1;
        bool f=1;
        while(k--){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                f=0;
                break;
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