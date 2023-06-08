#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n=s.size(),m=t.size();
        string ans="";
        int i=n-1,j=m-1;
        bool f=1;
        while(j>=0){
            if(i<0){
                ans.push_back(t[j--]);
            }
            else{
                if(s[i]>t[j]){
                    if(j>0){
                        string str=t.substr(j-1,2);
                        int x=stoi(str);
                        int y=(x-(s[i]-'0'));
                        if(y>=10 || y<0){
                            f=0;
                            break;
                        }
                        ans.push_back(y+'0');
                    }
                    else{
                        f=0;
                        break;
                    }
                    j-=2;
                    i--;
                }
                else{
                    ans.push_back(((t[j]-'0')-(s[i]-'0'))+'0');
                    i--;j--;
                }
            }
        }
        if(i>=0){
            f=0;
        }
        if(f){
            reverse(ans.begin(),ans.end());
            int i=0;
            if(ans[0]=='0'){
                
                while(i<n){
                    if(ans[i]=='0'){
                        i++;
                    }
                    else{
                        break;
                    }
                }
            }
            cout<<ans.substr(i)<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}