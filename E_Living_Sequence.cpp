#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        while(n>0){
            v.push_back(n%9);
            n/=9;
        }
        int len=v.size();
        int num=0;
        for(int i=len-1;i>=0;i--){
            num=num*10+v[i];
        }
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='4' || s[i]=='8'|| s[i]=='5' || s[i]=='7' || s[i]=='6' ){
                int x=s[i]-'0';
                x++;
                s[i]=x+'0';
            }
        }
        cout<<s<<endl;
    }
}