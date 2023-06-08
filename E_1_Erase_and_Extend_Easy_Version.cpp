#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    char x=s[0];
    int idx=n;
    for(int i=1;i<n;i++){
        if(s[i]>x){
            idx=i;
            break;
        }
        if(s[i]==x){
            int j=i+1;
            string str=s.substr(j,n-j);

            int k=1;
            string s1=s.substr(k,str.size());
            if(str==s1||str>s1){
                idx=i;
                break;
            }
            
        }
    }
  
    s.erase(idx,n-idx);
    int l=k;
    while(k>0){
        k-=s.size();
        s+=s;
    }
    cout<<s.substr(0,l)<<"\n";
}
