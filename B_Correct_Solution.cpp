#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    string s,str;
    cin>>s>>str;
    // string s=to_string(n);
    // string str=to_string(m);

    sort(s.begin(), s.end());
    if(s[0]=='0'){
        for(int i=1;i<s.size();i++){
            if(s[i]!='0'){
                swap(s[i],s[0]);
                break;
            }
        }
    }
    if(str==s ){
        cout<<"OK";
    }
    else{
        cout<<"WRONG_ANSWER";
    }
    cout<<endl;
}