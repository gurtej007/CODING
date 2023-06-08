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
        map<char,int> mp;
        string str="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int idx1=n,idx2=n,idx3=n,idx4=n;
        bool f=1;
        for(int i=0;i<n;i++){
            if(idx1>idx2 || idx1>idx3 || idx1>idx4 || idx2>idx3 || idx2>idx4 || idx3>idx4){
                 cout<<"NO\n";
                 f=0;
                 break;
            }
            if(s[i]=='m') idx1=i;
            else if(s[i]=='e') idx2=i;
            else if(s[i]=='o') idx3=i;
            else if(s[i]=='w') idx4=i;
            else{            
                cout<<"NO\n";
                f=0;
                break;
            }
        }
        if(f){
            if( idx1!=n && idx2!=n && idx3!=n && idx4!=n && idx1<idx2 && idx1<idx3 && idx2<idx3 && idx1<idx4 && idx2<idx4 && idx3<idx4){
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
    }
}