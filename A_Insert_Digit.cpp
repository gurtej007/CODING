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
        int id=-1;
        for(int i=0;i<n;i++){
            if(s[i]-'0'<k){
                id=i;
                break;
            }
        }
        if(id==-1){
            s+=k+'0';
            cout<<s<<"\n";
            continue;
        }
        string s1=s.substr(id);
        string str=s.substr(0,id);
        str+=k+'0';
        str+=s1;
        cout<<str<<endl;
    }
}