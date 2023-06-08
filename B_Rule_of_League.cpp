#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((a!=0 && b!=0)||(a==0 && b==0)){
            cout<<"-1\n";
            continue;
        }
        vector<int> v;
        for(int i=0;i<a+b;i++){
            v.push_back(1);
        }
        int x=a+b+2;
        bool f=1;
        while(x<=n){
            if(n-x+1<a+b){
                f=0;
                break;
            }
            for(int i=0;i<a+b;i++){
                v.push_back(x);
            }
            x+=a+b;
        }
        if(!f){
            cout<<"-1";
        }
        else{
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<"\n";
    }
}