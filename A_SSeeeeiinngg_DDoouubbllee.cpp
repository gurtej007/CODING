#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t=s;
        reverse(t.begin(), t.end());
        cout<<s+t<<"\n";
    }
}