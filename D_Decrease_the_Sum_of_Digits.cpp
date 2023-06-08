#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s="";
        int x=n;
        while(x!=0){
            s.push_back(x%10+'0');
            x/=10;
        }
        reverse(s.begin(), s.end());
        int sum=0;
        int idx=-1;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
            if(sum>k){
                idx=i;
                break;
            }
            if(sum==k){
                bool f=0;
                for(int j=i+1;j<s.size();j++){
                    if(s[j]!='0'){
                        f=1;
                        break;
                    }
                }
                if(f){
                    idx=i;
                    break;
                }
                else{
                     break;
                }
            }
        }
        if(idx==-1){
            cout<<"0\n";
            continue;
        }
        int y=1;
        for(int i=0;i<s.size()-idx;i++){
            y*=10LL;
        }
        int z=0;
        for(int i=idx;i<s.size();i++){
            z=z*10+s[i]-'0';
        }
        cout<<y-z<<"\n";
    }
}