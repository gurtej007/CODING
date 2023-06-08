#include<bits/stdc++.h>
using namespace std;
#define int  long long 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<"-1\n";
            continue;
        }
        vector<int> ans;
        bool f=0;
        while(n%2==1 && n>1){
            if((n/2)%2==1){
                n=n/2;
                ans.push_back(2);
            }
            else if((n/2+1)%2==1){
                n=n/2+1;
                ans.push_back(1);
            }
            else{
                f=1;
                break;
            }
        }
        if(!f){
            cout<<ans.size()<<"\n";
            for(int i=ans.size()-1;i>=0;i--){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}