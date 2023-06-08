#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;
        if(a[0]==b[0]){
            cout<<"YES\n";
            cout<<a[0]<<"*\n";
            continue;
        }
        if(a[a.size()-1]==b[b.size()-1]){
            cout<<"YES\n";
            cout<<"*"<<a[a.size()-1]<<"\n";
            continue;
        }
        bool f=0;
        for(int i=0;i<a.size()-1;i++){
            for(int j=0;j<b.size()-1;j++){
                if(a[i]==b[j] && a[i+1]==b[j+1]){
                    cout<<"YES\n";
                    cout<<"*"<<a[i]<<a[i+1]<<"*\n";
                    f=1;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        if(!f){
            cout<<"NO\n";
        }
    }
}