#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int n1=s1.size();
        int n2=s2.size();
        if(s1[n1-1]==s2[n2-1]){
            if(s1[n1-1]=='L'){
                if(s1.size()>s2.size()){
                    cout<<">"<<"\n";
                }
                else if(s1.size()<s2.size()){
                    cout<<"<"<<"\n";
                }
                else{
                    cout<<"="<<"\n";
                }
            }
            else if(s1[n1-1]=='S'){
                if(s1.size()>s2.size()){
                    cout<<"<"<<"\n";
                }
                else if(s1.size()<s2.size()){
                    cout<<">"<<"\n";
                }
                else{
                    cout<<"="<<"\n";
                }
            }
            else{
                cout<<"="<<"\n";
            }
        }
        else{
            if(s1[n1-1]=='L' && (s2[n2-1]=='M' || s2[n2-1]=='S')){
                cout<<">"<<"\n";
            }
            if(s1[n1-1]=='S' && (s2[n2-1]=='M' ||s2[n2-1]=='L')){
                cout<<"<"<<"\n";
            }
            if(s1[n1-1]=='M' && s2[n2-1]=='L'){
                cout<<"<"<<"\n";
            }
            if(s2[n2-1]=='M' && s2[n2-1]=='S'){
                cout<<">"<<"\n";
            }
        }
    }
}