#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v;
        string s1="";
        string s2="";
        for(int i=0;i<2*n-2;i++){
            string s;
            cin>>s;
            if(s.size()==n/2 && s1==""){
                s1=s;
            }
            else if(s.size()==n/2){
                s2=s;
            }
            v.push_back(s);

        }
        string str=s1+s2;
        bool f=1;
        int i=0,j=str.size()-1;
        while (i<j)
        {
           if(str[i]!=str[j]){
                cout<<"NO\n";
                f=0;
                break;
           }
           i++;j--;
        }
        if(f){
            cout<<"YES\n";
        }
    }
}