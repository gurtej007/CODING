#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string str="314159265358979323846264338327";
        int cnt=0;
        for(int i=0;i<30;i++){
            if(str[i]==s[i]){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<"\n";
    }
}